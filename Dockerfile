FROM ubuntu:16.04

RUN apt-get update
RUN apt-get install -y wget pwgen

ARG RPC_USER
ARG RPC_PASSWORD
ENV RPC_USER ${RPC_USER:-cpts}
# Create a random password if the user doesn't set one
ENV RANDOM_PASS `pwgen -Bs1 12`
ENV RPC_PASSWORD ${RPC_PASSWORD:-$RANDOM_PASS}

# Build the project
RUN wget https://github.com/CPTSCoin/wallet -O cpts-1.1.0.tar.gz
RUN tar -xvf cpts-1.1.0.tar.gz
RUN mkdir -p /root/.cpts/
RUN echo "rpcuser=$RPC_USER\nrpcpassword=$RPC_PASSWORD" > /root/.cpts/cpts.conf

EXPOSE 8332 8333 18332 18333

WORKDIR /cpts-1.1.0/bin
CMD ["/cpts-1.1.0/bin/cptsd"]


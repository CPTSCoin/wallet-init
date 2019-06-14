/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame_BG;
    QGridLayout *gridLayout_8;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_Header;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_left;
    QFrame *frameObfuscation;
    QVBoxLayout *verticalLayout;
    QFrame *frame_CombinedBalances;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5z;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_1;
    QGridLayout *gridLayout_3;
    QLabel *labelBalanceTextz;
    QLabel *labelBalancez;
    QLabel *labelTotalTextz;
    QLabel *labelTotalz;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_Balances;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelTotal;
    QLabel *labelSpendable;
    QLabel *labelWatchTotal;
    QLabel *labelImmatureText;
    QLabel *labelBalanceText;
    QLabel *labelTotalText;
    QLabel *labelLockedBalanceText;
    QLabel *labelWatchAvailable;
    QLabel *labelWatchImmature;
    QLabel *labelLockedBalance;
    QLabel *labelWatchLocked;
    QLabel *labelPendingText;
    QLabel *labelBalance;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchPending;
    QLabel *labelWatchonly;
    QLabel *roi_2;
    QLabel *roi_1;
    QLabel *labelImmature;
    QLabel *label_Daily_Rewards;
    QLabel *label_MN_Online;
    QLabel *label_Needed_Collat;
    QLabel *label_Days_ROI;
    QLabel *label_lcolat;
    QLabel *label_CurrentBlock_value;
    QLabel *label_CurrentBlock;
    QLabel *labelMnTotal_Value;
    QLabel *label_CurrentBlockReward;
    QLabel *label_Supply_value;
    QLabel *label_CurrentBlockReward_value;
    QLabel *label_LockedCoin;
    QLabel *label_LockedCoin_value;
    QLabel *label_Supply;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameObfuscation_2;
    QVBoxLayout *verticalLayout_right;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QLabel *labelAlerts;
    QLabel *exchangeFrame;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(978, 841);
        OverviewPage->setMinimumSize(QSize(960, 682));
        gridLayout_4 = new QGridLayout(OverviewPage);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame_BG = new QFrame(OverviewPage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(850, 610));
        frame_BG->setMaximumSize(QSize(16777215, 16777215));
        frame_BG->setFrameShape(QFrame::StyledPanel);
        frame_BG->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_BG);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        frame_Header = new QFrame(frame_BG);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_Header = new QVBoxLayout(frame_Header);
        verticalLayout_Header->setObjectName(QStringLiteral("verticalLayout_Header"));
        verticalLayout_Header->setContentsMargins(0, 0, 0, 0);

        gridLayout_8->addWidget(frame_Header, 0, 0, 1, 1);

        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        gridLayout_2 = new QGridLayout(frame_Content);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        frameObfuscation = new QFrame(frame_Content);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 0));
        frameObfuscation->setFrameShape(QFrame::StyledPanel);
        frameObfuscation->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameObfuscation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_CombinedBalances = new QFrame(frameObfuscation);
        frame_CombinedBalances->setObjectName(QStringLiteral("frame_CombinedBalances"));
        frame_CombinedBalances->setMinimumSize(QSize(470, 0));
        frame_CombinedBalances->setFrameShape(QFrame::StyledPanel);
        frame_CombinedBalances->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_CombinedBalances);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5z = new QLabel(frame_CombinedBalances);
        label_5z->setObjectName(QStringLiteral("label_5z"));
        label_5z->setMinimumSize(QSize(0, 20));
        label_5z->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_5z->setFont(font);

        horizontalLayout_5->addWidget(label_5z);

        labelWalletStatus = new QLabel(frame_CombinedBalances);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setMaximumSize(QSize(16777215, 40));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelWalletStatus);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_1);


        verticalLayout_5->addLayout(horizontalLayout_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(12);
        gridLayout_3->setVerticalSpacing(0);
        labelBalanceTextz = new QLabel(frame_CombinedBalances);
        labelBalanceTextz->setObjectName(QStringLiteral("labelBalanceTextz"));

        gridLayout_3->addWidget(labelBalanceTextz, 1, 0, 1, 1);

        labelBalancez = new QLabel(frame_CombinedBalances);
        labelBalancez->setObjectName(QStringLiteral("labelBalancez"));
        labelBalancez->setFont(font);
        labelBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelBalancez, 1, 1, 1, 1);

        labelTotalTextz = new QLabel(frame_CombinedBalances);
        labelTotalTextz->setObjectName(QStringLiteral("labelTotalTextz"));

        gridLayout_3->addWidget(labelTotalTextz, 2, 0, 1, 1);

        labelTotalz = new QLabel(frame_CombinedBalances);
        labelTotalz->setObjectName(QStringLiteral("labelTotalz"));
        labelTotalz->setFont(font);
        labelTotalz->setCursor(QCursor(Qt::IBeamCursor));
        labelTotalz->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelTotalz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotalz->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelTotalz, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 3, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);


        verticalLayout->addWidget(frame_CombinedBalances);

        frame_Balances = new QFrame(frameObfuscation);
        frame_Balances->setObjectName(QStringLiteral("frame_Balances"));
        frame_Balances->setFrameShape(QFrame::StyledPanel);
        frame_Balances->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_Balances);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 5, 3, 1, 1);

        labelTotal = new QLabel(frame_Balances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelSpendable = new QLabel(frame_Balances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchTotal = new QLabel(frame_Balances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font1);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelImmatureText = new QLabel(frame_Balances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelBalanceText = new QLabel(frame_Balances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelTotalText = new QLabel(frame_Balances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelLockedBalanceText = new QLabel(frame_Balances);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));

        gridLayout->addWidget(labelLockedBalanceText, 4, 0, 1, 1);

        labelWatchAvailable = new QLabel(frame_Balances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font1);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelWatchImmature = new QLabel(frame_Balances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font1);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelLockedBalance = new QLabel(frame_Balances);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setFont(font1);
        labelLockedBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelLockedBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelLockedBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLockedBalance, 4, 1, 1, 1);

        labelWatchLocked = new QLabel(frame_Balances);
        labelWatchLocked->setObjectName(QStringLiteral("labelWatchLocked"));
        labelWatchLocked->setFont(font1);
        labelWatchLocked->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchLocked->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelWatchLocked->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchLocked->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchLocked, 4, 2, 1, 1);

        labelPendingText = new QLabel(frame_Balances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelBalance = new QLabel(frame_Balances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelUnconfirmed = new QLabel(frame_Balances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchPending = new QLabel(frame_Balances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font1);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelWatchonly = new QLabel(frame_Balances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        roi_2 = new QLabel(frame_Balances);
        roi_2->setObjectName(QStringLiteral("roi_2"));
        roi_2->setFont(font1);
        roi_2->setCursor(QCursor(Qt::IBeamCursor));
        roi_2->setText(QStringLiteral("0"));
        roi_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        roi_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(roi_2, 10, 3, 1, 1);

        roi_1 = new QLabel(frame_Balances);
        roi_1->setObjectName(QStringLiteral("roi_1"));
        roi_1->setFont(font1);
        roi_1->setCursor(QCursor(Qt::IBeamCursor));
        roi_1->setText(QStringLiteral("0"));
        roi_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        roi_1->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(roi_1, 10, 1, 1, 1);

        labelImmature = new QLabel(frame_Balances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 CPTS"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        label_Daily_Rewards = new QLabel(frame_Balances);
        label_Daily_Rewards->setObjectName(QStringLiteral("label_Daily_Rewards"));

        gridLayout->addWidget(label_Daily_Rewards, 10, 0, 1, 1);

        label_MN_Online = new QLabel(frame_Balances);
        label_MN_Online->setObjectName(QStringLiteral("label_MN_Online"));

        gridLayout->addWidget(label_MN_Online, 7, 2, 1, 1);

        label_Needed_Collat = new QLabel(frame_Balances);
        label_Needed_Collat->setObjectName(QStringLiteral("label_Needed_Collat"));

        gridLayout->addWidget(label_Needed_Collat, 7, 0, 1, 1);

        label_Days_ROI = new QLabel(frame_Balances);
        label_Days_ROI->setObjectName(QStringLiteral("label_Days_ROI"));

        gridLayout->addWidget(label_Days_ROI, 10, 2, 1, 1);

        label_lcolat = new QLabel(frame_Balances);
        label_lcolat->setObjectName(QStringLiteral("label_lcolat"));
        label_lcolat->setFont(font1);
        label_lcolat->setCursor(QCursor(Qt::IBeamCursor));
        label_lcolat->setText(QStringLiteral("5,000 CPTS"));
        label_lcolat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_lcolat->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_lcolat, 7, 1, 1, 1);

        label_CurrentBlock_value = new QLabel(frame_Balances);
        label_CurrentBlock_value->setObjectName(QStringLiteral("label_CurrentBlock_value"));
        label_CurrentBlock_value->setFont(font1);
        label_CurrentBlock_value->setCursor(QCursor(Qt::IBeamCursor));
        label_CurrentBlock_value->setText(QStringLiteral("0"));
        label_CurrentBlock_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_CurrentBlock_value->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_CurrentBlock_value, 9, 1, 1, 1);

        label_CurrentBlock = new QLabel(frame_Balances);
        label_CurrentBlock->setObjectName(QStringLiteral("label_CurrentBlock"));

        gridLayout->addWidget(label_CurrentBlock, 9, 0, 1, 1);

        labelMnTotal_Value = new QLabel(frame_Balances);
        labelMnTotal_Value->setObjectName(QStringLiteral("labelMnTotal_Value"));
        labelMnTotal_Value->setFont(font1);
        labelMnTotal_Value->setCursor(QCursor(Qt::IBeamCursor));
        labelMnTotal_Value->setText(QStringLiteral("0"));
        labelMnTotal_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelMnTotal_Value->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelMnTotal_Value, 7, 3, 1, 1);

        label_CurrentBlockReward = new QLabel(frame_Balances);
        label_CurrentBlockReward->setObjectName(QStringLiteral("label_CurrentBlockReward"));

        gridLayout->addWidget(label_CurrentBlockReward, 9, 2, 1, 1);

        label_Supply_value = new QLabel(frame_Balances);
        label_Supply_value->setObjectName(QStringLiteral("label_Supply_value"));
        label_Supply_value->setFont(font1);
        label_Supply_value->setCursor(QCursor(Qt::IBeamCursor));
        label_Supply_value->setText(QStringLiteral("0"));
        label_Supply_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Supply_value->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_Supply_value, 13, 1, 1, 1);

        label_CurrentBlockReward_value = new QLabel(frame_Balances);
        label_CurrentBlockReward_value->setObjectName(QStringLiteral("label_CurrentBlockReward_value"));
        label_CurrentBlockReward_value->setFont(font1);
        label_CurrentBlockReward_value->setCursor(QCursor(Qt::IBeamCursor));
        label_CurrentBlockReward_value->setText(QStringLiteral("0"));
        label_CurrentBlockReward_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_CurrentBlockReward_value->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_CurrentBlockReward_value, 9, 3, 1, 1);

        label_LockedCoin = new QLabel(frame_Balances);
        label_LockedCoin->setObjectName(QStringLiteral("label_LockedCoin"));

        gridLayout->addWidget(label_LockedCoin, 13, 2, 1, 1);

        label_LockedCoin_value = new QLabel(frame_Balances);
        label_LockedCoin_value->setObjectName(QStringLiteral("label_LockedCoin_value"));
        label_LockedCoin_value->setFont(font1);
        label_LockedCoin_value->setCursor(QCursor(Qt::IBeamCursor));
        label_LockedCoin_value->setText(QStringLiteral("0"));
        label_LockedCoin_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_LockedCoin_value->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_LockedCoin_value, 13, 3, 1, 1);

        label_Supply = new QLabel(frame_Balances);
        label_Supply->setObjectName(QStringLiteral("label_Supply"));

        gridLayout->addWidget(label_Supply, 13, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 0, 1, 4);


        verticalLayout_4->addLayout(gridLayout);

        frameObfuscation_2 = new QFrame(frame_Balances);
        frameObfuscation_2->setObjectName(QStringLiteral("frameObfuscation_2"));
        frameObfuscation_2->setMinimumSize(QSize(0, 0));
        frameObfuscation_2->setFrameShape(QFrame::StyledPanel);
        frameObfuscation_2->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(frameObfuscation_2);


        verticalLayout->addWidget(frame_Balances);


        verticalLayout_left->addWidget(frameObfuscation);


        gridLayout_2->addLayout(verticalLayout_left, 0, 0, 1, 1);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setObjectName(QStringLiteral("verticalLayout_right"));
        frame_RecentTransactions = new QFrame(frame_Content);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setMinimumSize(QSize(0, 0));
        frame_RecentTransactions->setMaximumSize(QSize(550, 16777215));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_1 = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_RecentTransactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_RecentTransactions);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_1->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setMinimumSize(QSize(0, 0));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_1->addWidget(listTransactions);

        labelAlerts = new QLabel(frame_RecentTransactions);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setMaximumSize(QSize(16777215, 16777215));
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        verticalLayout_1->addWidget(labelAlerts);


        verticalLayout_right->addWidget(frame_RecentTransactions);

        verticalLayout_right->setStretch(0, 1);

        gridLayout_2->addLayout(verticalLayout_right, 0, 1, 1, 1);


        gridLayout_8->addWidget(frame_Content, 1, 0, 1, 1);

        exchangeFrame = new QLabel(frame_BG);
        exchangeFrame->setObjectName(QStringLiteral("exchangeFrame"));
        exchangeFrame->setMinimumSize(QSize(0, 260));
        exchangeFrame->setMaximumSize(QSize(16777215, 260));
        exchangeFrame->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(exchangeFrame, 2, 0, 1, 1);


        gridLayout_4->addWidget(frame_BG, 0, 0, 1, 1);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_5z->setToolTip(QApplication::translate("OverviewPage", "Combined Balance (including unconfirmed and immature coins)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5z->setText(QApplication::translate("OverviewPage", "Combined Balance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the CPTS network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelBalanceTextz->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalancez->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalTextz->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotalz->setToolTip(QApplication::translate("OverviewPage", "Total Balance, including all unavailable coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current CPTS balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotalText->setToolTip(QApplication::translate("OverviewPage", "Your current CPTS balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked CPTS or Masternode collaterals. These are excluded from zCPTS minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked CPTS or Masternode collaterals. These are excluded from zCPTS minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchLocked->setToolTip(QApplication::translate("OverviewPage", "Current locked balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        roi_2->setToolTip(QApplication::translate("OverviewPage", "Days to get Return on Investment", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        roi_1->setToolTip(QApplication::translate("OverviewPage", "Daily Rewards for current Collateral", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Daily_Rewards->setText(QApplication::translate("OverviewPage", "Daily Rewards:", Q_NULLPTR));
        label_MN_Online->setText(QApplication::translate("OverviewPage", "MN Online:", Q_NULLPTR));
        label_Needed_Collat->setText(QApplication::translate("OverviewPage", "Collateral:", Q_NULLPTR));
        label_Days_ROI->setText(QApplication::translate("OverviewPage", "Days Till ROI:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_lcolat->setToolTip(QApplication::translate("OverviewPage", "Current collateral", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_CurrentBlock_value->setToolTip(QApplication::translate("OverviewPage", "Current Block Height", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_CurrentBlock->setText(QApplication::translate("OverviewPage", "Current Block:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelMnTotal_Value->setToolTip(QApplication::translate("OverviewPage", "Total number of Masternodes Online", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_CurrentBlockReward->setText(QApplication::translate("OverviewPage", "Block Reward:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Supply_value->setToolTip(QApplication::translate("OverviewPage", "Current Coin Supply", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_CurrentBlockReward_value->setToolTip(QApplication::translate("OverviewPage", "Current Block Reward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_LockedCoin->setText(QApplication::translate("OverviewPage", "Locked Coins:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_LockedCoin_value->setToolTip(QApplication::translate("OverviewPage", "Total Amount of coins locked", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Supply->setText(QApplication::translate("OverviewPage", "Coin Supply:", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the CPTS network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelAlerts->setText(QString());
        exchangeFrame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H

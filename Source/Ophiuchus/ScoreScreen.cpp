#include "ScoreScreen.h"
#define LOCTEXT_NAMESPACE "ScoreScreen"
void SMainMenuWidger::Construct(const FArguments& InArgs) {
	OwningHUD = InArgs._OwningHUD;
	const FMargin ContentPadding = FMargin(500.f, 300.f);
	const FMargin ButtonPadding = FMargin(10.f);
	const FText TitleText = LOCTEXT("GameTitle", "Ophiuchus");
	const FText PlayText = LOCTEXT("PlayGame", "Start Game");
	const FText QuitText = LOCTEXT("QuitGame", "Quit Game");

	FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	ButtonTextStyle.Size = 40.f;

	FSlateFontInfo TitleTextStyle = ButtonTextStyle;
	ButtonTextStyle.Size = 60.f;

	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SImage)
			.ColorAndOpacity(FColor::Black)
		]
	+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(ContentPadding)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
		.Text(TitleText)
		.Justification(ETextJustify::Center)
		]
	//Main Menu
	+ SVerticalBox::Slot()
		.Padding(ContentPadding)
		[
			SNew(SButton)
			.OnClicked(this, &SMainMenuWidget::OnPlayClicked)
		[
			SNew(STextBlock)
			.Font(ButtonTextStyle)
		.Text(PlayText)
		.Justification(ETextJustify::Center)
		]

		]
	//Lore Button
	+ SVerticalBox::Slot()
		.Padding(ContentPadding)
		[
			SNew(SButton)
			.OnClicked(this, &SMainMenuWidget::OnPlayClicked)
		[
			SNew(STextBlock)
			.Font(ButtonTextStyle)
		.Text(PlayText)
		.Justification(ETextJustify::Center)
		]

		]
	//QuitButton
	+ SVerticalBox::Slot()
		.Padding(ContentPadding)
		[
			SNew(SButton)
			.OnClicked(this, &SMainMenuWidget::OnQuitClicked)
		[
			SNew(STextBlock)
			.Font(ButtonTextStyle)
		.Text(QuitText)
		.Justification(ETextJustify::Center)
		]

		]
		]
		];
}
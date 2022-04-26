// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

/**
 *
 */
class SMainMenuWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SMainMenuWidget) {}

	SLATE_ARGUMENT(TWeakObjectPtr<class HealthBar>, OwningHUD)

		SLATE_END_ARGS()
		//constructor
		void Construct(const FArgument& InArgs);

	FReply OnPlayClicked() const;
	FReply OnPlayClicked() const;

	//created widget
	TWeakObjectPtr<class HealthBar>, OwningHUD;

	virtual bool SupportsKeyboardFocus() const override { return true; };
};
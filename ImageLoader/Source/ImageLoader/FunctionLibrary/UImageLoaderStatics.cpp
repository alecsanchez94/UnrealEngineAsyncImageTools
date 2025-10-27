// Fill out your copyright notice in the Description page of Project Settings.


#include "UImageLoaderStatics.h"
#include "ImageLoader/SubSystem/ImageLoaderSubSystem.h"
#include "ImageUtils.h"


UImageLoaderSubSystem* UUImageLoaderStatics::GetImageLoaderSubsystem(const UObject* WorldContextObject)
{
	UImageLoaderSubSystem* ImageLoaderSubSystem = WorldContextObject->GetWorld()->GetSubsystem<
		UImageLoaderSubSystem>();

	return ImageLoaderSubSystem;
}

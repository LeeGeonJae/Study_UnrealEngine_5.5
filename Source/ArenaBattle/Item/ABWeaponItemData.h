// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ABItemData.h"
#include "ABWeaponItemData.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABWeaponItemData : public UABItemData
{
	GENERATED_BODY()
	
public:
	// �ش� �Լ��� UPrimaryDataAsset�� ���� �Լ��� �������̵��Ͽ� �������ϴµ�,
	// Ÿ�԰� �̸��� �����Ͽ� ������ �ĺ��� ���̵��� �츮�� ����� �� �� �ֽ��ϴ�.
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("ABItemData", GetFName());
	}
	
public:
	UPROPERTY(EditAnywhere, Category = Weapon)
	TSoftObjectPtr<USkeletalMesh> WeaponMesh;
};

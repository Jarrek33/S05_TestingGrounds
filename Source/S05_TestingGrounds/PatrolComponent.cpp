// Fill out your copyright notice in the Description page of Project Settings.

#include "S05_TestingGrounds.h"
#include "PatrolComponent.h"



TArray<AActor*> UPatrolComponent::GetPatrolPoints() const
{
	return PatrolPoints;
}


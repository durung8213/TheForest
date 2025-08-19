// Fill out your copyright notice in the Description page of Project Settings.

//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "MyActor.generated.h"
//
//UCLASS()
//class MULTIFOREST_API AMyActor : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AMyActor();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	virtual void PostInitProperties() override;
//
//	virtual void CalculateValues();
//
//	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
//
//public :
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
//	int32 TotalDamage;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
//	float DamageTimeInSeconds;
//
//	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
//	float DamagePerSecond;
//
////	// UFUNCTION 지정자
////public:
////	UFUNCTION(BlueprintCallable)
////	void SetTestName(FString InName) { TestName = InName; }
////
////	UFUNCTION(Server,Reliable)
////	void ServerTestServerCall();
////
////public:
////	//값 변경과 함수 호출 //
////	//서버에서 값 변경시 특정 함수를 호출하는 기능
////	//호출될 함수의 접두사에는 OnRep_를 붙인다.
////	UPROPERTY(ReplicatedUsing = OnRep_CallFunction)
////	FString TestName;
////
////	//호출될 함수
////	UFUNCTION()
////	void OnRep_CallFunction();
////
////public:
////	//멀티용 Replicated 변수
////	// 변수 자체가 Replicated 됨
////	UPROPERTY(Replicated)
////	int32 TestNum;

};

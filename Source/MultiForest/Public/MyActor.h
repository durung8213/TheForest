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
////	// UFUNCTION ������
////public:
////	UFUNCTION(BlueprintCallable)
////	void SetTestName(FString InName) { TestName = InName; }
////
////	UFUNCTION(Server,Reliable)
////	void ServerTestServerCall();
////
////public:
////	//�� ����� �Լ� ȣ�� //
////	//�������� �� ����� Ư�� �Լ��� ȣ���ϴ� ���
////	//ȣ��� �Լ��� ���λ翡�� OnRep_�� ���δ�.
////	UPROPERTY(ReplicatedUsing = OnRep_CallFunction)
////	FString TestName;
////
////	//ȣ��� �Լ�
////	UFUNCTION()
////	void OnRep_CallFunction();
////
////public:
////	//��Ƽ�� Replicated ����
////	// ���� ��ü�� Replicated ��
////	UPROPERTY(Replicated)
////	int32 TestNum;

};

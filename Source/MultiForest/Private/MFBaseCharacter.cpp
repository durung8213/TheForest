// Fill out your copyright notice in the Description page of Project Settings.


//#include "MFBaseCharacter.h"
//#include "Components/CapsuleComponent.h"
//#include "GameFramework/CharacterMovementComponent.h"
//
//// Sets default values
//AMFBaseCharacter::AMFBaseCharacter()
//{
// 	//ȸ���Է�ó��
//    bUseControllerRotationPitch = false;
//    bUseControllerRotationRoll = false;
//    bUseControllerRotationYaw = false;
//    
//    //ĸ�������ʹ� ����
//    //CapsuleComponent ����
//    //�ݸ��� ������ ���� (Height, Radius)
//    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
//
//    //�ݸ��� �������� pawn���� �ٲ���
//    GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));
//
//
//    //F12 �� �Լ��� Ÿ�� �� ���� �ش� Ŭ������ ��� �����Ǿ� �ִ��� ã��
//    // 
//    //Movement �⺻ ����
//    GetCharacterMovement()->bOrientRotationToMovement = true; //�̵��������� ĳ���� ������ ȸ���ǵ���
//    GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.0f);
//
//    GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.f, -92.48f), FRotator(0.f, 0.f, 0.f));
//    GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

    //���ɷ�Ż �޽� ����, �������̱⿡ ContructorHelpers ���

    //AnimationMode�� ABP�� �����߱� ������ �� ABP�� ������.
    // �ִϸ��̼� �������Ʈ -> ��Ȯ�ϰԴ� �ִ� �ν��Ͻ� Ŭ����
 
    /*
        �������Ʈ��� ������ ������ �ִ� Ŭ���� ������ �����´�.
        AnimBP_C / _C�� �ٿ��� �ش� �ִ� �ν��Ͻ��� �ִ� Ŭ������ �������ڴ�.
        MS�� MY�� �ٲ� ������ ���� 
        ĳ������ �⺻���� �������� ����

    */

    // 1. ĳ���� Ŭ���� ���� -> ���� ����
    // Punlic, private, protected

    //USpringArmComponent* CameraBoom
    /*
    UCameraComponent* ThirdPersonCamera
    ���� ��� ����! ��ũ��Ʈ�� ���� �� Ǯ� ���.

    AMSCharacterPlayer
    -> Cpp : CameraBoom = CreateDefaultSubobject<USPringArmComponent>(TEXT("CameraBoom"));

   
} */



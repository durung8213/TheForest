// Fill out your copyright notice in the Description page of Project Settings.


//#include "MFBaseCharacter.h"
//#include "Components/CapsuleComponent.h"
//#include "GameFramework/CharacterMovementComponent.h"
//
//// Sets default values
//AMFBaseCharacter::AMFBaseCharacter()
//{
// 	//회전입려처리
//    bUseControllerRotationPitch = false;
//    bUseControllerRotationRoll = false;
//    bUseControllerRotationYaw = false;
//    
//    //캡슐컴포터는 설정
//    //CapsuleComponent 설정
//    //콜리전 세이프 수정 (Height, Radius)
//    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
//
//    //콜리전 프리셋을 pawn으로 바꿔줌
//    GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));
//
//
//    //F12 로 함수를 타고 들어간 다음 해당 클래스가 어디에 구현되어 있는지 찾기
//    // 
//    //Movement 기본 설정
//    GetCharacterMovement()->bOrientRotationToMovement = true; //이동방향으로 캐릭터 정면이 회전되도록
//    GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.0f);
//
//    GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.f, -92.48f), FRotator(0.f, 0.f, 0.f));
//    GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

    //스케레탈 메쉬 설정, 생성자이기에 ContructorHelpers 사용

    //AnimationMode를 ABP로 설정했기 때문에 들어갈 ABP를 설정함.
    // 애니메이션 블루프린트 -> 정확하게는 애님 인스턴스 클래스
 
    /*
        블루프린트라는 껍질에 감싸져 있는 클래스 정보를 가져온다.
        AnimBP_C / _C를 붙여서 해당 애님 인스턴스에 있는 클래스를 가져오겠다.
        MS를 MY로 바꾼 파일을 참조 
        캐릭터의 기본적인 움직임을 구현

    */

    // 1. 캐릭터 클래스 생성 -> 구조 생성
    // Punlic, private, protected

    //USpringArmComponent* CameraBoom
    /*
    UCameraComponent* ThirdPersonCamera
    축약어 사용 금지! 스크립트로 내를 다 풀어서 사용.

    AMSCharacterPlayer
    -> Cpp : CameraBoom = CreateDefaultSubobject<USPringArmComponent>(TEXT("CameraBoom"));

   
} */



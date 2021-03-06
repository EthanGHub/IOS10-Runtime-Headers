//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSDictionary, NSString, _HKMedicalIDData;

@interface HDDemoDataPerson : NSObject
{
    _Bool _sexualActivityIsTryingToConceive;
    _Bool _useContinuousGlucoseMonitoring;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_personDescription;
    NSDateComponents *_birthDateComponents;
    NSDate *_birthDate;
    long long _biologicalSex;
    long long _bloodType;
    long long _fitzpatricSkinType;
    double _timeIncrement;
    double _timeIncrementDuringExercise;
    double _dawnTime;
    double _sunsetTime;
    double _genericSampleTimeNoiseStdDev;
    double _uvIndexSampleFrequency;
    double _waistCircumferenceInInches;
    double _wristCircumferenceInInches;
    double _forearmCircumferenceInInches;
    double _hipCircumferenceInInches;
    double _heightSampleTime;
    double _heightTargetInCm;
    double _heightSampleTimeFrequency;
    double _heightSampleNoiseStdDev;
    double _weightSampleTime;
    double _weightTargetInKg;
    double _weightSampleTimeFrequency;
    double _weightSampleNoiseStdDev;
    double _weightLossStartDay;
    double _weightDailyChangeStdDev;
    double _weightDailyMaxLoss;
    double _weightChangePercentageMax;
    NSArray *_weightGainHolidayDaysInYear;
    long long _restingHeartRate;
    double _heartRateSampleFrequency;
    double _heartRateSampleFrequencyStdDev;
    double _heartRateSampleNoiseStdDev;
    long long _restingRespirationRate;
    double _restingRespirationRateSampleFrequency;
    double _restingRespirationRateSampleNoiseStdDev;
    double _bloodPressureSampleFrequency;
    long long _restingSystolicBloodPressure;
    long long _restingDiastolicBloodPressure;
    double _restingSystolicBloodPressureSampleNoiseStdDev;
    double _restingDiastolicBloodPressureSampleNoiseStdDev;
    double _bodyTempFeverMultiplier;
    double _bodyTempExerciseMultiplier;
    double _bodyTempSampleFrequency;
    double _bodyTempSampleNoiseStdDev;
    double _oxygenSaturationMean;
    double _oxygenSaturationSampleFrequency;
    double _oxygenSaturationStdDev;
    double _peripheralPerfusionIndexMean;
    double _peripheralPerfusionIndexSampleFrequency;
    double _peripheralPerfusionIndexStdDev;
    double _sexualActivityProbabilityPercentage;
    double _sexualActivityProtectionProbabilityPercentage;
    double _sexualActivityProtectionDocumentationProbabilityPercentage;
    double _menstrualPeriodFrequency;
    double _ovulationIndeterminateProbabilityPercentage;
    double _fitzpatrickSkinTypeSampleTime;
    long long _fitzpatrickSkinTypeScore;
    double _activeCaloriesSampleFrequency;
    double _restingCaloriesSampleFrequency;
    double _stepsSampleFrequency;
    double _stepsSampleFrequencyDuringExercise;
    double _sedentarySampleFrequency;
    double _exerciseTimeSampleFrequency;
    double _moveGoal;
    double _exerciseStartTime;
    double _exerciseStopTime;
    double _exerciseCooldownTime;
    double _exerciseStartTimeStdDev;
    double _exerciseStopTimeStdDev;
    double _exerciseIntensityPercentage;
    NSDictionary *_workoutPrototypesByCalendarDay;
    double _exerciseWeeklyWorkoutsMean;
    double _exerciseWeeklyWorkoutsStdDev;
    double _exercisePostDietWeeklyWorkoutsMean;
    double _exercisePostDietWeeklyWorkoutsStdDev;
    double _flightsClimbedDailyMean;
    double _flightsClimbedStdDev;
    double _flightsClimbedSampleTime;
    double _flightsClimbedSampleFrequency;
    double _flightsClimbedSampleFrequencyStdDev;
    double _breakfastTime;
    double _lunchTime;
    double _snackTime;
    double _dinnerTime;
    double _mealTimeSampleNoiseStdDev;
    double _preDietIntakeMultiplier;
    double _numCupsOfCoffeeDailyMean;
    double _numCupsOfCoffeeStdDev;
    double _waterConsumedSampleTime;
    double _waterConsumedSampleFrequency;
    double _waterConsumedDailyMean;
    double _waterConsumedStdDev;
    double _waterConsumedIntervalMean;
    double _waterConsumedIntervalStdDev;
    double _wakeUpTime;
    double _wakeUpTimeNoiseStdDev;
    double _bedTime;
    double _bedTimeNoiseStdDev;
    double _inBedTimeStdDev;
    unsigned long long _numSleepInterruptions;
    double _fallSampleFrequency;
    double _fallsDailyMean;
    double _fallsDailyStdDev;
    double _continuousGlucoseMonitoringSampleFrequency;
    double _numDailyFingerSticksAdherence;
    double _insulinSensitivity;
    double _insulinProduction;
    double _spirometrySampleFrequency;
    double _spirometrySampleTime;
    long long _asthmaSeverity;
    double _mindfulSessionFrequency;
    long long _mindfulSessionMean;
    long long _mindfulSessionStdDev;
    long long _nutritionTrackingType;
    long long _resultsTrackingType;
    _HKMedicalIDData *_medicalIDData;
}

+ (id)defaultPersonWithBiologicalSex:(long long)arg1;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(nonatomic) long long resultsTrackingType; // @synthesize resultsTrackingType=_resultsTrackingType;
@property(nonatomic) long long nutritionTrackingType; // @synthesize nutritionTrackingType=_nutritionTrackingType;
@property(nonatomic) long long mindfulSessionStdDev; // @synthesize mindfulSessionStdDev=_mindfulSessionStdDev;
@property(nonatomic) long long mindfulSessionMean; // @synthesize mindfulSessionMean=_mindfulSessionMean;
@property(nonatomic) double mindfulSessionFrequency; // @synthesize mindfulSessionFrequency=_mindfulSessionFrequency;
@property(nonatomic) long long asthmaSeverity; // @synthesize asthmaSeverity=_asthmaSeverity;
@property(nonatomic) double spirometrySampleTime; // @synthesize spirometrySampleTime=_spirometrySampleTime;
@property(nonatomic) double spirometrySampleFrequency; // @synthesize spirometrySampleFrequency=_spirometrySampleFrequency;
@property(nonatomic) double insulinProduction; // @synthesize insulinProduction=_insulinProduction;
@property(nonatomic) double insulinSensitivity; // @synthesize insulinSensitivity=_insulinSensitivity;
@property(nonatomic) double numDailyFingerSticksAdherence; // @synthesize numDailyFingerSticksAdherence=_numDailyFingerSticksAdherence;
@property(nonatomic) double continuousGlucoseMonitoringSampleFrequency; // @synthesize continuousGlucoseMonitoringSampleFrequency=_continuousGlucoseMonitoringSampleFrequency;
@property(nonatomic) _Bool useContinuousGlucoseMonitoring; // @synthesize useContinuousGlucoseMonitoring=_useContinuousGlucoseMonitoring;
@property(nonatomic) double fallsDailyStdDev; // @synthesize fallsDailyStdDev=_fallsDailyStdDev;
@property(nonatomic) double fallsDailyMean; // @synthesize fallsDailyMean=_fallsDailyMean;
@property(nonatomic) double fallSampleFrequency; // @synthesize fallSampleFrequency=_fallSampleFrequency;
@property(nonatomic) unsigned long long numSleepInterruptions; // @synthesize numSleepInterruptions=_numSleepInterruptions;
@property(nonatomic) double inBedTimeStdDev; // @synthesize inBedTimeStdDev=_inBedTimeStdDev;
@property(nonatomic) double bedTimeNoiseStdDev; // @synthesize bedTimeNoiseStdDev=_bedTimeNoiseStdDev;
@property(nonatomic) double bedTime; // @synthesize bedTime=_bedTime;
@property(nonatomic) double wakeUpTimeNoiseStdDev; // @synthesize wakeUpTimeNoiseStdDev=_wakeUpTimeNoiseStdDev;
@property(nonatomic) double wakeUpTime; // @synthesize wakeUpTime=_wakeUpTime;
@property(nonatomic) double waterConsumedIntervalStdDev; // @synthesize waterConsumedIntervalStdDev=_waterConsumedIntervalStdDev;
@property(nonatomic) double waterConsumedIntervalMean; // @synthesize waterConsumedIntervalMean=_waterConsumedIntervalMean;
@property(nonatomic) double waterConsumedStdDev; // @synthesize waterConsumedStdDev=_waterConsumedStdDev;
@property(nonatomic) double waterConsumedDailyMean; // @synthesize waterConsumedDailyMean=_waterConsumedDailyMean;
@property(nonatomic) double waterConsumedSampleFrequency; // @synthesize waterConsumedSampleFrequency=_waterConsumedSampleFrequency;
@property(nonatomic) double waterConsumedSampleTime; // @synthesize waterConsumedSampleTime=_waterConsumedSampleTime;
@property(nonatomic) double numCupsOfCoffeeStdDev; // @synthesize numCupsOfCoffeeStdDev=_numCupsOfCoffeeStdDev;
@property(nonatomic) double numCupsOfCoffeeDailyMean; // @synthesize numCupsOfCoffeeDailyMean=_numCupsOfCoffeeDailyMean;
@property(nonatomic) double preDietIntakeMultiplier; // @synthesize preDietIntakeMultiplier=_preDietIntakeMultiplier;
@property(nonatomic) double mealTimeSampleNoiseStdDev; // @synthesize mealTimeSampleNoiseStdDev=_mealTimeSampleNoiseStdDev;
@property(nonatomic) double dinnerTime; // @synthesize dinnerTime=_dinnerTime;
@property(nonatomic) double snackTime; // @synthesize snackTime=_snackTime;
@property(nonatomic) double lunchTime; // @synthesize lunchTime=_lunchTime;
@property(nonatomic) double breakfastTime; // @synthesize breakfastTime=_breakfastTime;
@property(nonatomic) double flightsClimbedSampleFrequencyStdDev; // @synthesize flightsClimbedSampleFrequencyStdDev=_flightsClimbedSampleFrequencyStdDev;
@property(nonatomic) double flightsClimbedSampleFrequency; // @synthesize flightsClimbedSampleFrequency=_flightsClimbedSampleFrequency;
@property(nonatomic) double flightsClimbedSampleTime; // @synthesize flightsClimbedSampleTime=_flightsClimbedSampleTime;
@property(nonatomic) double flightsClimbedStdDev; // @synthesize flightsClimbedStdDev=_flightsClimbedStdDev;
@property(nonatomic) double flightsClimbedDailyMean; // @synthesize flightsClimbedDailyMean=_flightsClimbedDailyMean;
@property(nonatomic) double exercisePostDietWeeklyWorkoutsStdDev; // @synthesize exercisePostDietWeeklyWorkoutsStdDev=_exercisePostDietWeeklyWorkoutsStdDev;
@property(nonatomic) double exercisePostDietWeeklyWorkoutsMean; // @synthesize exercisePostDietWeeklyWorkoutsMean=_exercisePostDietWeeklyWorkoutsMean;
@property(nonatomic) double exerciseWeeklyWorkoutsStdDev; // @synthesize exerciseWeeklyWorkoutsStdDev=_exerciseWeeklyWorkoutsStdDev;
@property(nonatomic) double exerciseWeeklyWorkoutsMean; // @synthesize exerciseWeeklyWorkoutsMean=_exerciseWeeklyWorkoutsMean;
@property(retain, nonatomic) NSDictionary *workoutPrototypesByCalendarDay; // @synthesize workoutPrototypesByCalendarDay=_workoutPrototypesByCalendarDay;
@property(nonatomic) double exerciseIntensityPercentage; // @synthesize exerciseIntensityPercentage=_exerciseIntensityPercentage;
@property(nonatomic) double exerciseStopTimeStdDev; // @synthesize exerciseStopTimeStdDev=_exerciseStopTimeStdDev;
@property(nonatomic) double exerciseStartTimeStdDev; // @synthesize exerciseStartTimeStdDev=_exerciseStartTimeStdDev;
@property(nonatomic) double exerciseCooldownTime; // @synthesize exerciseCooldownTime=_exerciseCooldownTime;
@property(nonatomic) double exerciseStopTime; // @synthesize exerciseStopTime=_exerciseStopTime;
@property(nonatomic) double exerciseStartTime; // @synthesize exerciseStartTime=_exerciseStartTime;
@property(nonatomic) double moveGoal; // @synthesize moveGoal=_moveGoal;
@property(nonatomic) double exerciseTimeSampleFrequency; // @synthesize exerciseTimeSampleFrequency=_exerciseTimeSampleFrequency;
@property(nonatomic) double sedentarySampleFrequency; // @synthesize sedentarySampleFrequency=_sedentarySampleFrequency;
@property(nonatomic) double stepsSampleFrequencyDuringExercise; // @synthesize stepsSampleFrequencyDuringExercise=_stepsSampleFrequencyDuringExercise;
@property(nonatomic) double stepsSampleFrequency; // @synthesize stepsSampleFrequency=_stepsSampleFrequency;
@property(nonatomic) double restingCaloriesSampleFrequency; // @synthesize restingCaloriesSampleFrequency=_restingCaloriesSampleFrequency;
@property(nonatomic) double activeCaloriesSampleFrequency; // @synthesize activeCaloriesSampleFrequency=_activeCaloriesSampleFrequency;
@property(nonatomic) long long fitzpatrickSkinTypeScore; // @synthesize fitzpatrickSkinTypeScore=_fitzpatrickSkinTypeScore;
@property(nonatomic) double fitzpatrickSkinTypeSampleTime; // @synthesize fitzpatrickSkinTypeSampleTime=_fitzpatrickSkinTypeSampleTime;
@property(nonatomic) double ovulationIndeterminateProbabilityPercentage; // @synthesize ovulationIndeterminateProbabilityPercentage=_ovulationIndeterminateProbabilityPercentage;
@property(nonatomic) _Bool sexualActivityIsTryingToConceive; // @synthesize sexualActivityIsTryingToConceive=_sexualActivityIsTryingToConceive;
@property(nonatomic) double menstrualPeriodFrequency; // @synthesize menstrualPeriodFrequency=_menstrualPeriodFrequency;
@property(nonatomic) double sexualActivityProtectionDocumentationProbabilityPercentage; // @synthesize sexualActivityProtectionDocumentationProbabilityPercentage=_sexualActivityProtectionDocumentationProbabilityPercentage;
@property(nonatomic) double sexualActivityProtectionProbabilityPercentage; // @synthesize sexualActivityProtectionProbabilityPercentage=_sexualActivityProtectionProbabilityPercentage;
@property(nonatomic) double sexualActivityProbabilityPercentage; // @synthesize sexualActivityProbabilityPercentage=_sexualActivityProbabilityPercentage;
@property(nonatomic) double peripheralPerfusionIndexStdDev; // @synthesize peripheralPerfusionIndexStdDev=_peripheralPerfusionIndexStdDev;
@property(nonatomic) double peripheralPerfusionIndexSampleFrequency; // @synthesize peripheralPerfusionIndexSampleFrequency=_peripheralPerfusionIndexSampleFrequency;
@property(nonatomic) double peripheralPerfusionIndexMean; // @synthesize peripheralPerfusionIndexMean=_peripheralPerfusionIndexMean;
@property(nonatomic) double oxygenSaturationStdDev; // @synthesize oxygenSaturationStdDev=_oxygenSaturationStdDev;
@property(nonatomic) double oxygenSaturationSampleFrequency; // @synthesize oxygenSaturationSampleFrequency=_oxygenSaturationSampleFrequency;
@property(nonatomic) double oxygenSaturationMean; // @synthesize oxygenSaturationMean=_oxygenSaturationMean;
@property(nonatomic) double bodyTempSampleNoiseStdDev; // @synthesize bodyTempSampleNoiseStdDev=_bodyTempSampleNoiseStdDev;
@property(nonatomic) double bodyTempSampleFrequency; // @synthesize bodyTempSampleFrequency=_bodyTempSampleFrequency;
@property(nonatomic) double bodyTempExerciseMultiplier; // @synthesize bodyTempExerciseMultiplier=_bodyTempExerciseMultiplier;
@property(nonatomic) double bodyTempFeverMultiplier; // @synthesize bodyTempFeverMultiplier=_bodyTempFeverMultiplier;
@property(nonatomic) double restingDiastolicBloodPressureSampleNoiseStdDev; // @synthesize restingDiastolicBloodPressureSampleNoiseStdDev=_restingDiastolicBloodPressureSampleNoiseStdDev;
@property(nonatomic) double restingSystolicBloodPressureSampleNoiseStdDev; // @synthesize restingSystolicBloodPressureSampleNoiseStdDev=_restingSystolicBloodPressureSampleNoiseStdDev;
@property(nonatomic) long long restingDiastolicBloodPressure; // @synthesize restingDiastolicBloodPressure=_restingDiastolicBloodPressure;
@property(nonatomic) long long restingSystolicBloodPressure; // @synthesize restingSystolicBloodPressure=_restingSystolicBloodPressure;
@property(nonatomic) double bloodPressureSampleFrequency; // @synthesize bloodPressureSampleFrequency=_bloodPressureSampleFrequency;
@property(nonatomic) double restingRespirationRateSampleNoiseStdDev; // @synthesize restingRespirationRateSampleNoiseStdDev=_restingRespirationRateSampleNoiseStdDev;
@property(nonatomic) double restingRespirationRateSampleFrequency; // @synthesize restingRespirationRateSampleFrequency=_restingRespirationRateSampleFrequency;
@property(nonatomic) long long restingRespirationRate; // @synthesize restingRespirationRate=_restingRespirationRate;
@property(nonatomic) double heartRateSampleNoiseStdDev; // @synthesize heartRateSampleNoiseStdDev=_heartRateSampleNoiseStdDev;
@property(nonatomic) double heartRateSampleFrequencyStdDev; // @synthesize heartRateSampleFrequencyStdDev=_heartRateSampleFrequencyStdDev;
@property(nonatomic) double heartRateSampleFrequency; // @synthesize heartRateSampleFrequency=_heartRateSampleFrequency;
@property(nonatomic) long long restingHeartRate; // @synthesize restingHeartRate=_restingHeartRate;
@property(retain, nonatomic) NSArray *weightGainHolidayDaysInYear; // @synthesize weightGainHolidayDaysInYear=_weightGainHolidayDaysInYear;
@property(nonatomic) double weightChangePercentageMax; // @synthesize weightChangePercentageMax=_weightChangePercentageMax;
@property(nonatomic) double weightDailyMaxLoss; // @synthesize weightDailyMaxLoss=_weightDailyMaxLoss;
@property(nonatomic) double weightDailyChangeStdDev; // @synthesize weightDailyChangeStdDev=_weightDailyChangeStdDev;
@property(nonatomic) double weightLossStartDay; // @synthesize weightLossStartDay=_weightLossStartDay;
@property(nonatomic) double weightSampleNoiseStdDev; // @synthesize weightSampleNoiseStdDev=_weightSampleNoiseStdDev;
@property(nonatomic) double weightSampleTimeFrequency; // @synthesize weightSampleTimeFrequency=_weightSampleTimeFrequency;
@property(nonatomic) double weightTargetInKg; // @synthesize weightTargetInKg=_weightTargetInKg;
@property(nonatomic) double weightSampleTime; // @synthesize weightSampleTime=_weightSampleTime;
@property(nonatomic) double heightSampleNoiseStdDev; // @synthesize heightSampleNoiseStdDev=_heightSampleNoiseStdDev;
@property(nonatomic) double heightSampleTimeFrequency; // @synthesize heightSampleTimeFrequency=_heightSampleTimeFrequency;
@property(nonatomic) double heightTargetInCm; // @synthesize heightTargetInCm=_heightTargetInCm;
@property(nonatomic) double heightSampleTime; // @synthesize heightSampleTime=_heightSampleTime;
@property(nonatomic) double hipCircumferenceInInches; // @synthesize hipCircumferenceInInches=_hipCircumferenceInInches;
@property(nonatomic) double forearmCircumferenceInInches; // @synthesize forearmCircumferenceInInches=_forearmCircumferenceInInches;
@property(nonatomic) double wristCircumferenceInInches; // @synthesize wristCircumferenceInInches=_wristCircumferenceInInches;
@property(nonatomic) double waistCircumferenceInInches; // @synthesize waistCircumferenceInInches=_waistCircumferenceInInches;
@property(nonatomic) double uvIndexSampleFrequency; // @synthesize uvIndexSampleFrequency=_uvIndexSampleFrequency;
@property(nonatomic) double genericSampleTimeNoiseStdDev; // @synthesize genericSampleTimeNoiseStdDev=_genericSampleTimeNoiseStdDev;
@property(nonatomic) double sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) double dawnTime; // @synthesize dawnTime=_dawnTime;
@property(nonatomic) double timeIncrementDuringExercise; // @synthesize timeIncrementDuringExercise=_timeIncrementDuringExercise;
@property(nonatomic) double timeIncrement; // @synthesize timeIncrement=_timeIncrement;
@property(nonatomic) long long fitzpatricSkinType; // @synthesize fitzpatricSkinType=_fitzpatricSkinType;
@property(nonatomic) long long bloodType; // @synthesize bloodType=_bloodType;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) NSDate *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSDateComponents *birthDateComponents; // @synthesize birthDateComponents=_birthDateComponents;
@property(copy, nonatomic) NSString *personDescription; // @synthesize personDescription=_personDescription;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (void)updateMedicalIDData;
- (id)fullName;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 description:(id)arg3 birthDateComponents:(id)arg4 biologicalSex:(long long)arg5;

@end


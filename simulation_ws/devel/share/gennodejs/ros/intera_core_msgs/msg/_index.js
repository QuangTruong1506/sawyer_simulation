
"use strict";

let IODeviceConfiguration = require('./IODeviceConfiguration.js');
let HeadPanCommand = require('./HeadPanCommand.js');
let JointLimits = require('./JointLimits.js');
let NavigatorStates = require('./NavigatorStates.js');
let RobotAssemblyState = require('./RobotAssemblyState.js');
let HomingState = require('./HomingState.js');
let IODataStatus = require('./IODataStatus.js');
let DigitalIOStates = require('./DigitalIOStates.js');
let SEAJointState = require('./SEAJointState.js');
let AnalogIOStates = require('./AnalogIOStates.js');
let HomingCommand = require('./HomingCommand.js');
let IOStatus = require('./IOStatus.js');
let EndpointNamesArray = require('./EndpointNamesArray.js');
let NavigatorState = require('./NavigatorState.js');
let CollisionAvoidanceState = require('./CollisionAvoidanceState.js');
let HeadState = require('./HeadState.js');
let IOComponentConfiguration = require('./IOComponentConfiguration.js');
let IOComponentStatus = require('./IOComponentStatus.js');
let JointCommand = require('./JointCommand.js');
let EndpointState = require('./EndpointState.js');
let IONodeConfiguration = require('./IONodeConfiguration.js');
let EndpointStates = require('./EndpointStates.js');
let URDFConfiguration = require('./URDFConfiguration.js');
let DigitalOutputCommand = require('./DigitalOutputCommand.js');
let AnalogIOState = require('./AnalogIOState.js');
let InteractionControlState = require('./InteractionControlState.js');
let DigitalIOState = require('./DigitalIOState.js');
let AnalogOutputCommand = require('./AnalogOutputCommand.js');
let IOComponentCommand = require('./IOComponentCommand.js');
let CollisionDetectionState = require('./CollisionDetectionState.js');
let CameraSettings = require('./CameraSettings.js');
let IONodeStatus = require('./IONodeStatus.js');
let CameraControl = require('./CameraControl.js');
let IODeviceStatus = require('./IODeviceStatus.js');
let InteractionControlCommand = require('./InteractionControlCommand.js');
let CalibrationCommandActionFeedback = require('./CalibrationCommandActionFeedback.js');
let CalibrationCommandResult = require('./CalibrationCommandResult.js');
let CalibrationCommandFeedback = require('./CalibrationCommandFeedback.js');
let CalibrationCommandActionGoal = require('./CalibrationCommandActionGoal.js');
let CalibrationCommandAction = require('./CalibrationCommandAction.js');
let CalibrationCommandActionResult = require('./CalibrationCommandActionResult.js');
let CalibrationCommandGoal = require('./CalibrationCommandGoal.js');

module.exports = {
  IODeviceConfiguration: IODeviceConfiguration,
  HeadPanCommand: HeadPanCommand,
  JointLimits: JointLimits,
  NavigatorStates: NavigatorStates,
  RobotAssemblyState: RobotAssemblyState,
  HomingState: HomingState,
  IODataStatus: IODataStatus,
  DigitalIOStates: DigitalIOStates,
  SEAJointState: SEAJointState,
  AnalogIOStates: AnalogIOStates,
  HomingCommand: HomingCommand,
  IOStatus: IOStatus,
  EndpointNamesArray: EndpointNamesArray,
  NavigatorState: NavigatorState,
  CollisionAvoidanceState: CollisionAvoidanceState,
  HeadState: HeadState,
  IOComponentConfiguration: IOComponentConfiguration,
  IOComponentStatus: IOComponentStatus,
  JointCommand: JointCommand,
  EndpointState: EndpointState,
  IONodeConfiguration: IONodeConfiguration,
  EndpointStates: EndpointStates,
  URDFConfiguration: URDFConfiguration,
  DigitalOutputCommand: DigitalOutputCommand,
  AnalogIOState: AnalogIOState,
  InteractionControlState: InteractionControlState,
  DigitalIOState: DigitalIOState,
  AnalogOutputCommand: AnalogOutputCommand,
  IOComponentCommand: IOComponentCommand,
  CollisionDetectionState: CollisionDetectionState,
  CameraSettings: CameraSettings,
  IONodeStatus: IONodeStatus,
  CameraControl: CameraControl,
  IODeviceStatus: IODeviceStatus,
  InteractionControlCommand: InteractionControlCommand,
  CalibrationCommandActionFeedback: CalibrationCommandActionFeedback,
  CalibrationCommandResult: CalibrationCommandResult,
  CalibrationCommandFeedback: CalibrationCommandFeedback,
  CalibrationCommandActionGoal: CalibrationCommandActionGoal,
  CalibrationCommandAction: CalibrationCommandAction,
  CalibrationCommandActionResult: CalibrationCommandActionResult,
  CalibrationCommandGoal: CalibrationCommandGoal,
};

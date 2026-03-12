//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_order_post_response_cj_params.g.dart';

/// BackupOrderPostResponseCjParams
///
/// Properties:
/// * [containerTagId] 
/// * [CID] 
/// * [OID] 
/// * [TYPE] 
/// * [iTEM1] 
/// * [aMT1] 
/// * [qTY1] 
/// * [CURRENCY] 
@BuiltValue()
abstract class BackupOrderPostResponseCjParams implements Built<BackupOrderPostResponseCjParams, BackupOrderPostResponseCjParamsBuilder> {
  @BuiltValueField(wireName: r'containerTagId')
  String? get containerTagId;

  @BuiltValueField(wireName: r'CID')
  String? get CID;

  @BuiltValueField(wireName: r'OID')
  String? get OID;

  @BuiltValueField(wireName: r'TYPE')
  String? get TYPE;

  @BuiltValueField(wireName: r'ITEM1')
  String? get iTEM1;

  @BuiltValueField(wireName: r'AMT1')
  String? get aMT1;

  @BuiltValueField(wireName: r'QTY1')
  int? get qTY1;

  @BuiltValueField(wireName: r'CURRENCY')
  String? get CURRENCY;

  BackupOrderPostResponseCjParams._();

  factory BackupOrderPostResponseCjParams([void updates(BackupOrderPostResponseCjParamsBuilder b)]) = _$BackupOrderPostResponseCjParams;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupOrderPostResponseCjParamsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupOrderPostResponseCjParams> get serializer => _$BackupOrderPostResponseCjParamsSerializer();
}

class _$BackupOrderPostResponseCjParamsSerializer implements PrimitiveSerializer<BackupOrderPostResponseCjParams> {
  @override
  final Iterable<Type> types = const [BackupOrderPostResponseCjParams, _$BackupOrderPostResponseCjParams];

  @override
  final String wireName = r'BackupOrderPostResponseCjParams';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupOrderPostResponseCjParams object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.containerTagId != null) {
      yield r'containerTagId';
      yield serializers.serialize(
        object.containerTagId,
        specifiedType: const FullType(String),
      );
    }
    if (object.CID != null) {
      yield r'CID';
      yield serializers.serialize(
        object.CID,
        specifiedType: const FullType(String),
      );
    }
    if (object.OID != null) {
      yield r'OID';
      yield serializers.serialize(
        object.OID,
        specifiedType: const FullType(String),
      );
    }
    if (object.TYPE != null) {
      yield r'TYPE';
      yield serializers.serialize(
        object.TYPE,
        specifiedType: const FullType(String),
      );
    }
    if (object.iTEM1 != null) {
      yield r'ITEM1';
      yield serializers.serialize(
        object.iTEM1,
        specifiedType: const FullType(String),
      );
    }
    if (object.aMT1 != null) {
      yield r'AMT1';
      yield serializers.serialize(
        object.aMT1,
        specifiedType: const FullType(String),
      );
    }
    if (object.qTY1 != null) {
      yield r'QTY1';
      yield serializers.serialize(
        object.qTY1,
        specifiedType: const FullType(int),
      );
    }
    if (object.CURRENCY != null) {
      yield r'CURRENCY';
      yield serializers.serialize(
        object.CURRENCY,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupOrderPostResponseCjParams object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupOrderPostResponseCjParamsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'containerTagId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.containerTagId = valueDes;
          break;
        case r'CID':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.CID = valueDes;
          break;
        case r'OID':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.OID = valueDes;
          break;
        case r'TYPE':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.TYPE = valueDes;
          break;
        case r'ITEM1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.iTEM1 = valueDes;
          break;
        case r'AMT1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.aMT1 = valueDes;
          break;
        case r'QTY1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.qTY1 = valueDes;
          break;
        case r'CURRENCY':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.CURRENCY = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupOrderPostResponseCjParams deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupOrderPostResponseCjParamsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}


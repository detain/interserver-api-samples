//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_data_fraudrecord.g.dart';

/// AccountInfoDataFraudrecord
///
/// Properties:
/// * [score] 
/// * [count] 
/// * [reliability] 
/// * [code] 
@BuiltValue()
abstract class AccountInfoDataFraudrecord implements Built<AccountInfoDataFraudrecord, AccountInfoDataFraudrecordBuilder> {
  @BuiltValueField(wireName: r'score')
  String? get score;

  @BuiltValueField(wireName: r'count')
  String? get count;

  @BuiltValueField(wireName: r'reliability')
  String? get reliability;

  @BuiltValueField(wireName: r'code')
  String? get code;

  AccountInfoDataFraudrecord._();

  factory AccountInfoDataFraudrecord([void updates(AccountInfoDataFraudrecordBuilder b)]) = _$AccountInfoDataFraudrecord;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoDataFraudrecordBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoDataFraudrecord> get serializer => _$AccountInfoDataFraudrecordSerializer();
}

class _$AccountInfoDataFraudrecordSerializer implements PrimitiveSerializer<AccountInfoDataFraudrecord> {
  @override
  final Iterable<Type> types = const [AccountInfoDataFraudrecord, _$AccountInfoDataFraudrecord];

  @override
  final String wireName = r'AccountInfoDataFraudrecord';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoDataFraudrecord object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.score != null) {
      yield r'score';
      yield serializers.serialize(
        object.score,
        specifiedType: const FullType(String),
      );
    }
    if (object.count != null) {
      yield r'count';
      yield serializers.serialize(
        object.count,
        specifiedType: const FullType(String),
      );
    }
    if (object.reliability != null) {
      yield r'reliability';
      yield serializers.serialize(
        object.reliability,
        specifiedType: const FullType(String),
      );
    }
    if (object.code != null) {
      yield r'code';
      yield serializers.serialize(
        object.code,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoDataFraudrecord object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoDataFraudrecordBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'score':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.score = valueDes;
          break;
        case r'count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.count = valueDes;
          break;
        case r'reliability':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.reliability = valueDes;
          break;
        case r'code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.code = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoDataFraudrecord deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoDataFraudrecordBuilder();
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


//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_ip_info.dart';
import 'package:openapi/src/model/quickserver_addons.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_extra_info_tables.g.dart';

/// QuickserverExtraInfoTables
///
/// Properties:
/// * [ipInfo] 
/// * [addons] 
@BuiltValue()
abstract class QuickserverExtraInfoTables implements Built<QuickserverExtraInfoTables, QuickserverExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'ip_info')
  QuickserverIpInfo? get ipInfo;

  @BuiltValueField(wireName: r'addons')
  QuickserverAddons? get addons;

  QuickserverExtraInfoTables._();

  factory QuickserverExtraInfoTables([void updates(QuickserverExtraInfoTablesBuilder b)]) = _$QuickserverExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverExtraInfoTables> get serializer => _$QuickserverExtraInfoTablesSerializer();
}

class _$QuickserverExtraInfoTablesSerializer implements PrimitiveSerializer<QuickserverExtraInfoTables> {
  @override
  final Iterable<Type> types = const [QuickserverExtraInfoTables, _$QuickserverExtraInfoTables];

  @override
  final String wireName = r'QuickserverExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ipInfo != null) {
      yield r'ip_info';
      yield serializers.serialize(
        object.ipInfo,
        specifiedType: const FullType(QuickserverIpInfo),
      );
    }
    if (object.addons != null) {
      yield r'addons';
      yield serializers.serialize(
        object.addons,
        specifiedType: const FullType(QuickserverAddons),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip_info':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverIpInfo),
          ) as QuickserverIpInfo;
          result.ipInfo.replace(valueDes);
          break;
        case r'addons':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverAddons),
          ) as QuickserverAddons;
          result.addons.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverExtraInfoTablesBuilder();
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


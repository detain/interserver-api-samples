//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_backups.g.dart';

/// HomeServicesBackups
///
/// Properties:
/// * [links] - List of backup links.
/// * [count] - Number of backups.
@BuiltValue()
abstract class HomeServicesBackups implements Built<HomeServicesBackups, HomeServicesBackupsBuilder> {
  /// List of backup links.
  @BuiltValueField(wireName: r'links')
  BuiltList<String>? get links;

  /// Number of backups.
  @BuiltValueField(wireName: r'count')
  int? get count;

  HomeServicesBackups._();

  factory HomeServicesBackups([void updates(HomeServicesBackupsBuilder b)]) = _$HomeServicesBackups;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesBackupsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesBackups> get serializer => _$HomeServicesBackupsSerializer();
}

class _$HomeServicesBackupsSerializer implements PrimitiveSerializer<HomeServicesBackups> {
  @override
  final Iterable<Type> types = const [HomeServicesBackups, _$HomeServicesBackups];

  @override
  final String wireName = r'HomeServicesBackups';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesBackups object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.links != null) {
      yield r'links';
      yield serializers.serialize(
        object.links,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.count != null) {
      yield r'count';
      yield serializers.serialize(
        object.count,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesBackups object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesBackupsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.links.replace(valueDes);
          break;
        case r'count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.count = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesBackups deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesBackupsBuilder();
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


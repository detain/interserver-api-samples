//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_services_domains.dart';
import 'package:openapi/src/model/home_services_backups.dart';
import 'package:openapi/src/model/home_services_webhosting.dart';
import 'package:openapi/src/model/home_services_vps.dart';
import 'package:openapi/src/model/home_services_licenses.dart';
import 'package:openapi/src/model/home_services_servers.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services.g.dart';

/// Users services.
///
/// Properties:
/// * [domains] 
/// * [webhosting] 
/// * [vps] 
/// * [licenses] 
/// * [servers] 
/// * [backups] 
@BuiltValue()
abstract class HomeServices implements Built<HomeServices, HomeServicesBuilder> {
  @BuiltValueField(wireName: r'domains')
  HomeServicesDomains? get domains;

  @BuiltValueField(wireName: r'webhosting')
  HomeServicesWebhosting? get webhosting;

  @BuiltValueField(wireName: r'vps')
  HomeServicesVps? get vps;

  @BuiltValueField(wireName: r'licenses')
  HomeServicesLicenses? get licenses;

  @BuiltValueField(wireName: r'servers')
  HomeServicesServers? get servers;

  @BuiltValueField(wireName: r'backups')
  HomeServicesBackups? get backups;

  HomeServices._();

  factory HomeServices([void updates(HomeServicesBuilder b)]) = _$HomeServices;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServices> get serializer => _$HomeServicesSerializer();
}

class _$HomeServicesSerializer implements PrimitiveSerializer<HomeServices> {
  @override
  final Iterable<Type> types = const [HomeServices, _$HomeServices];

  @override
  final String wireName = r'HomeServices';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServices object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.domains != null) {
      yield r'domains';
      yield serializers.serialize(
        object.domains,
        specifiedType: const FullType(HomeServicesDomains),
      );
    }
    if (object.webhosting != null) {
      yield r'webhosting';
      yield serializers.serialize(
        object.webhosting,
        specifiedType: const FullType(HomeServicesWebhosting),
      );
    }
    if (object.vps != null) {
      yield r'vps';
      yield serializers.serialize(
        object.vps,
        specifiedType: const FullType(HomeServicesVps),
      );
    }
    if (object.licenses != null) {
      yield r'licenses';
      yield serializers.serialize(
        object.licenses,
        specifiedType: const FullType(HomeServicesLicenses),
      );
    }
    if (object.servers != null) {
      yield r'servers';
      yield serializers.serialize(
        object.servers,
        specifiedType: const FullType(HomeServicesServers),
      );
    }
    if (object.backups != null) {
      yield r'backups';
      yield serializers.serialize(
        object.backups,
        specifiedType: const FullType(HomeServicesBackups),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServices object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'domains':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesDomains),
          ) as HomeServicesDomains;
          result.domains.replace(valueDes);
          break;
        case r'webhosting':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesWebhosting),
          ) as HomeServicesWebhosting;
          result.webhosting.replace(valueDes);
          break;
        case r'vps':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesVps),
          ) as HomeServicesVps;
          result.vps.replace(valueDes);
          break;
        case r'licenses':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesLicenses),
          ) as HomeServicesLicenses;
          result.licenses.replace(valueDes);
          break;
        case r'servers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesServers),
          ) as HomeServicesServers;
          result.servers.replace(valueDes);
          break;
        case r'backups':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesBackups),
          ) as HomeServicesBackups;
          result.backups.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServices deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesBuilder();
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


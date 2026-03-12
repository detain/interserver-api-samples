//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_details_modules_licenses.dart';
import 'package:openapi/src/model/home_details_modules_quickservers.dart';
import 'package:openapi/src/model/home_details_modules_vps.dart';
import 'package:openapi/src/model/home_details_modules_servers.dart';
import 'package:openapi/src/model/home_details_modules_webhosting.dart';
import 'package:openapi/src/model/home_details_modules_backups.dart';
import 'package:openapi/src/model/home_details_modules_domains.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details_modules.g.dart';

/// HomeDetailsModules
///
/// Properties:
/// * [domains] 
/// * [webhosting] 
/// * [vps] 
/// * [licenses] 
/// * [backups] 
/// * [servers] 
/// * [quickservers] 
@BuiltValue()
abstract class HomeDetailsModules implements Built<HomeDetailsModules, HomeDetailsModulesBuilder> {
  @BuiltValueField(wireName: r'domains')
  HomeDetailsModulesDomains? get domains;

  @BuiltValueField(wireName: r'webhosting')
  HomeDetailsModulesWebhosting? get webhosting;

  @BuiltValueField(wireName: r'vps')
  HomeDetailsModulesVps? get vps;

  @BuiltValueField(wireName: r'licenses')
  HomeDetailsModulesLicenses? get licenses;

  @BuiltValueField(wireName: r'backups')
  HomeDetailsModulesBackups? get backups;

  @BuiltValueField(wireName: r'servers')
  HomeDetailsModulesServers? get servers;

  @BuiltValueField(wireName: r'quickservers')
  HomeDetailsModulesQuickservers? get quickservers;

  HomeDetailsModules._();

  factory HomeDetailsModules([void updates(HomeDetailsModulesBuilder b)]) = _$HomeDetailsModules;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsModulesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetailsModules> get serializer => _$HomeDetailsModulesSerializer();
}

class _$HomeDetailsModulesSerializer implements PrimitiveSerializer<HomeDetailsModules> {
  @override
  final Iterable<Type> types = const [HomeDetailsModules, _$HomeDetailsModules];

  @override
  final String wireName = r'HomeDetailsModules';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetailsModules object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.domains != null) {
      yield r'domains';
      yield serializers.serialize(
        object.domains,
        specifiedType: const FullType(HomeDetailsModulesDomains),
      );
    }
    if (object.webhosting != null) {
      yield r'webhosting';
      yield serializers.serialize(
        object.webhosting,
        specifiedType: const FullType(HomeDetailsModulesWebhosting),
      );
    }
    if (object.vps != null) {
      yield r'vps';
      yield serializers.serialize(
        object.vps,
        specifiedType: const FullType(HomeDetailsModulesVps),
      );
    }
    if (object.licenses != null) {
      yield r'licenses';
      yield serializers.serialize(
        object.licenses,
        specifiedType: const FullType(HomeDetailsModulesLicenses),
      );
    }
    if (object.backups != null) {
      yield r'backups';
      yield serializers.serialize(
        object.backups,
        specifiedType: const FullType(HomeDetailsModulesBackups),
      );
    }
    if (object.servers != null) {
      yield r'servers';
      yield serializers.serialize(
        object.servers,
        specifiedType: const FullType(HomeDetailsModulesServers),
      );
    }
    if (object.quickservers != null) {
      yield r'quickservers';
      yield serializers.serialize(
        object.quickservers,
        specifiedType: const FullType(HomeDetailsModulesQuickservers),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeDetailsModules object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsModulesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'domains':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesDomains),
          ) as HomeDetailsModulesDomains;
          result.domains.replace(valueDes);
          break;
        case r'webhosting':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesWebhosting),
          ) as HomeDetailsModulesWebhosting;
          result.webhosting.replace(valueDes);
          break;
        case r'vps':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesVps),
          ) as HomeDetailsModulesVps;
          result.vps.replace(valueDes);
          break;
        case r'licenses':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesLicenses),
          ) as HomeDetailsModulesLicenses;
          result.licenses.replace(valueDes);
          break;
        case r'backups':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesBackups),
          ) as HomeDetailsModulesBackups;
          result.backups.replace(valueDes);
          break;
        case r'servers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesServers),
          ) as HomeDetailsModulesServers;
          result.servers.replace(valueDes);
          break;
        case r'quickservers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModulesQuickservers),
          ) as HomeDetailsModulesQuickservers;
          result.quickservers.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeDetailsModules deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsModulesBuilder();
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


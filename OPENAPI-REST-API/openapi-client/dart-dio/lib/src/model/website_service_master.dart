//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_service_master.g.dart';

/// WebsiteServiceMaster
///
/// Properties:
/// * [websiteId] - Website ID for the service master
/// * [websiteName] - Website name for the service master
/// * [websiteIp] - IP address for the service master
/// * [websiteType] - Website type for the service master
/// * [websiteAvailable] - Availability status for the service master
/// * [websiteHdsize] - Hard drive size for the service master
/// * [websiteHdfree] - Free hard drive space for the service master
/// * [websiteLoad] - Load for the service master
/// * [websiteLastUpdate] - Last update date for the service master
/// * [websiteMaxSites] - Maximum number of sites for the service master
/// * [websiteOrder] - Order number for the service master
/// * [websitePartitions] - Partitions for the service master
/// * [websiteDns1] - DNS server 1 for the service master
/// * [websiteDns2] - DNS server 2 for the service master
@BuiltValue()
abstract class WebsiteServiceMaster implements Built<WebsiteServiceMaster, WebsiteServiceMasterBuilder> {
  /// Website ID for the service master
  @BuiltValueField(wireName: r'website_id')
  String? get websiteId;

  /// Website name for the service master
  @BuiltValueField(wireName: r'website_name')
  String? get websiteName;

  /// IP address for the service master
  @BuiltValueField(wireName: r'website_ip')
  String? get websiteIp;

  /// Website type for the service master
  @BuiltValueField(wireName: r'website_type')
  String? get websiteType;

  /// Availability status for the service master
  @BuiltValueField(wireName: r'website_available')
  String? get websiteAvailable;

  /// Hard drive size for the service master
  @BuiltValueField(wireName: r'website_hdsize')
  String? get websiteHdsize;

  /// Free hard drive space for the service master
  @BuiltValueField(wireName: r'website_hdfree')
  String? get websiteHdfree;

  /// Load for the service master
  @BuiltValueField(wireName: r'website_load')
  String? get websiteLoad;

  /// Last update date for the service master
  @BuiltValueField(wireName: r'website_last_update')
  String? get websiteLastUpdate;

  /// Maximum number of sites for the service master
  @BuiltValueField(wireName: r'website_max_sites')
  String? get websiteMaxSites;

  /// Order number for the service master
  @BuiltValueField(wireName: r'website_order')
  String? get websiteOrder;

  /// Partitions for the service master
  @BuiltValueField(wireName: r'website_partitions')
  String? get websitePartitions;

  /// DNS server 1 for the service master
  @BuiltValueField(wireName: r'website_dns1')
  String? get websiteDns1;

  /// DNS server 2 for the service master
  @BuiltValueField(wireName: r'website_dns2')
  String? get websiteDns2;

  WebsiteServiceMaster._();

  factory WebsiteServiceMaster([void updates(WebsiteServiceMasterBuilder b)]) = _$WebsiteServiceMaster;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteServiceMasterBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteServiceMaster> get serializer => _$WebsiteServiceMasterSerializer();
}

class _$WebsiteServiceMasterSerializer implements PrimitiveSerializer<WebsiteServiceMaster> {
  @override
  final Iterable<Type> types = const [WebsiteServiceMaster, _$WebsiteServiceMaster];

  @override
  final String wireName = r'WebsiteServiceMaster';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.websiteId != null) {
      yield r'website_id';
      yield serializers.serialize(
        object.websiteId,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteName != null) {
      yield r'website_name';
      yield serializers.serialize(
        object.websiteName,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteIp != null) {
      yield r'website_ip';
      yield serializers.serialize(
        object.websiteIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteType != null) {
      yield r'website_type';
      yield serializers.serialize(
        object.websiteType,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteAvailable != null) {
      yield r'website_available';
      yield serializers.serialize(
        object.websiteAvailable,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteHdsize != null) {
      yield r'website_hdsize';
      yield serializers.serialize(
        object.websiteHdsize,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteHdfree != null) {
      yield r'website_hdfree';
      yield serializers.serialize(
        object.websiteHdfree,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteLoad != null) {
      yield r'website_load';
      yield serializers.serialize(
        object.websiteLoad,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteLastUpdate != null) {
      yield r'website_last_update';
      yield serializers.serialize(
        object.websiteLastUpdate,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteMaxSites != null) {
      yield r'website_max_sites';
      yield serializers.serialize(
        object.websiteMaxSites,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteOrder != null) {
      yield r'website_order';
      yield serializers.serialize(
        object.websiteOrder,
        specifiedType: const FullType(String),
      );
    }
    if (object.websitePartitions != null) {
      yield r'website_partitions';
      yield serializers.serialize(
        object.websitePartitions,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteDns1 != null) {
      yield r'website_dns1';
      yield serializers.serialize(
        object.websiteDns1,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteDns2 != null) {
      yield r'website_dns2';
      yield serializers.serialize(
        object.websiteDns2,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteServiceMasterBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'website_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteId = valueDes;
          break;
        case r'website_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteName = valueDes;
          break;
        case r'website_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteIp = valueDes;
          break;
        case r'website_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteType = valueDes;
          break;
        case r'website_available':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteAvailable = valueDes;
          break;
        case r'website_hdsize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteHdsize = valueDes;
          break;
        case r'website_hdfree':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteHdfree = valueDes;
          break;
        case r'website_load':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteLoad = valueDes;
          break;
        case r'website_last_update':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteLastUpdate = valueDes;
          break;
        case r'website_max_sites':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteMaxSites = valueDes;
          break;
        case r'website_order':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteOrder = valueDes;
          break;
        case r'website_partitions':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websitePartitions = valueDes;
          break;
        case r'website_dns1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteDns1 = valueDes;
          break;
        case r'website_dns2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteDns2 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsiteServiceMaster deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteServiceMasterBuilder();
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


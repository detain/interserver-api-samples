using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class ServerAsset {
    /// <summary>
    /// Unique identifier for the asset.
    /// </summary>
    /// <value>Unique identifier for the asset.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public int? Id { get; set; }

    /// <summary>
    /// Order identifier for the asset.
    /// </summary>
    /// <value>Order identifier for the asset.</value>
    [DataMember(Name="order_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "order_id")]
    public string OrderId { get; set; }

    /// <summary>
    /// Hostname associated with the asset.
    /// </summary>
    /// <value>Hostname associated with the asset.</value>
    [DataMember(Name="hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hostname")]
    public string Hostname { get; set; }

    /// <summary>
    /// Status of the asset.
    /// </summary>
    /// <value>Status of the asset.</value>
    [DataMember(Name="status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "status")]
    public string Status { get; set; }

    /// <summary>
    /// Primary IPv4 address of the asset.
    /// </summary>
    /// <value>Primary IPv4 address of the asset.</value>
    [DataMember(Name="primary_ipv4", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "primary_ipv4")]
    public string PrimaryIpv4 { get; set; }

    /// <summary>
    /// Primary IPv6 address of the asset.
    /// </summary>
    /// <value>Primary IPv6 address of the asset.</value>
    [DataMember(Name="primary_ipv6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "primary_ipv6")]
    public string PrimaryIpv6 { get; set; }

    /// <summary>
    /// MAC address associated with the asset.
    /// </summary>
    /// <value>MAC address associated with the asset.</value>
    [DataMember(Name="mac", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mac")]
    public Object Mac { get; set; }

    /// <summary>
    /// Datacenter identifier for the asset.
    /// </summary>
    /// <value>Datacenter identifier for the asset.</value>
    [DataMember(Name="datacenter", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "datacenter")]
    public string Datacenter { get; set; }

    /// <summary>
    /// Type identifier for the asset.
    /// </summary>
    /// <value>Type identifier for the asset.</value>
    [DataMember(Name="type_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type_id")]
    public string TypeId { get; set; }

    /// <summary>
    /// Asset tag associated with the asset.
    /// </summary>
    /// <value>Asset tag associated with the asset.</value>
    [DataMember(Name="asset_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset_tag")]
    public string AssetTag { get; set; }

    /// <summary>
    /// Rack identifier for the asset.
    /// </summary>
    /// <value>Rack identifier for the asset.</value>
    [DataMember(Name="rack", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack")]
    public string Rack { get; set; }

    /// <summary>
    /// Row identifier for the asset.
    /// </summary>
    /// <value>Row identifier for the asset.</value>
    [DataMember(Name="row", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "row")]
    public string Row { get; set; }

    /// <summary>
    /// Column identifier for the asset.
    /// </summary>
    /// <value>Column identifier for the asset.</value>
    [DataMember(Name="col", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "col")]
    public string Col { get; set; }

    /// <summary>
    /// Starting unit identifier for the asset.
    /// </summary>
    /// <value>Starting unit identifier for the asset.</value>
    [DataMember(Name="unit_start", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "unit_start")]
    public string UnitStart { get; set; }

    /// <summary>
    /// Ending unit identifier for the asset.
    /// </summary>
    /// <value>Ending unit identifier for the asset.</value>
    [DataMember(Name="unit_end", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "unit_end")]
    public string UnitEnd { get; set; }

    /// <summary>
    /// Subunit identifier for the asset.
    /// </summary>
    /// <value>Subunit identifier for the asset.</value>
    [DataMember(Name="unit_sub", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "unit_sub")]
    public string UnitSub { get; set; }

    /// <summary>
    /// IPMI MAC address associated with the asset.
    /// </summary>
    /// <value>IPMI MAC address associated with the asset.</value>
    [DataMember(Name="ipmi_mac", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_mac")]
    public string IpmiMac { get; set; }

    /// <summary>
    /// IPMI IP address associated with the asset.
    /// </summary>
    /// <value>IPMI IP address associated with the asset.</value>
    [DataMember(Name="ipmi_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_ip")]
    public string IpmiIp { get; set; }

    /// <summary>
    /// IPMI admin username associated with the asset.
    /// </summary>
    /// <value>IPMI admin username associated with the asset.</value>
    [DataMember(Name="ipmi_admin_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_admin_username")]
    public Object IpmiAdminUsername { get; set; }

    /// <summary>
    /// IPMI admin password associated with the asset.
    /// </summary>
    /// <value>IPMI admin password associated with the asset.</value>
    [DataMember(Name="ipmi_admin_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_admin_password")]
    public Object IpmiAdminPassword { get; set; }

    /// <summary>
    /// IPMI client username associated with the asset.
    /// </summary>
    /// <value>IPMI client username associated with the asset.</value>
    [DataMember(Name="ipmi_client_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_client_username")]
    public Object IpmiClientUsername { get; set; }

    /// <summary>
    /// IPMI client password associated with the asset.
    /// </summary>
    /// <value>IPMI client password associated with the asset.</value>
    [DataMember(Name="ipmi_client_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_client_password")]
    public Object IpmiClientPassword { get; set; }

    /// <summary>
    /// IPMI update status associated with the asset.
    /// </summary>
    /// <value>IPMI update status associated with the asset.</value>
    [DataMember(Name="ipmi_updated", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_updated")]
    public Object IpmiUpdated { get; set; }

    /// <summary>
    /// IPMI working status associated with the asset.
    /// </summary>
    /// <value>IPMI working status associated with the asset.</value>
    [DataMember(Name="ipmi_working", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmi_working")]
    public string IpmiWorking { get; set; }

    /// <summary>
    /// Company associated with the asset.
    /// </summary>
    /// <value>Company associated with the asset.</value>
    [DataMember(Name="company", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "company")]
    public string Company { get; set; }

    /// <summary>
    /// Comments associated with the asset.
    /// </summary>
    /// <value>Comments associated with the asset.</value>
    [DataMember(Name="comments", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "comments")]
    public string Comments { get; set; }

    /// <summary>
    /// Make of the asset.
    /// </summary>
    /// <value>Make of the asset.</value>
    [DataMember(Name="make", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "make")]
    public string Make { get; set; }

    /// <summary>
    /// Model of the asset.
    /// </summary>
    /// <value>Model of the asset.</value>
    [DataMember(Name="model", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "model")]
    public string Model { get; set; }

    /// <summary>
    /// Description of the asset.
    /// </summary>
    /// <value>Description of the asset.</value>
    [DataMember(Name="description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "description")]
    public string Description { get; set; }

    /// <summary>
    /// Customer identifier for the asset.
    /// </summary>
    /// <value>Customer identifier for the asset.</value>
    [DataMember(Name="customer_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "customer_id")]
    public string CustomerId { get; set; }

    /// <summary>
    /// External identifier for the asset.
    /// </summary>
    /// <value>External identifier for the asset.</value>
    [DataMember(Name="external_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "external_id")]
    public string ExternalId { get; set; }

    /// <summary>
    /// Billing status of the asset.
    /// </summary>
    /// <value>Billing status of the asset.</value>
    [DataMember(Name="billing_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billing_status")]
    public string BillingStatus { get; set; }

    /// <summary>
    /// Overdue status of the asset.
    /// </summary>
    /// <value>Overdue status of the asset.</value>
    [DataMember(Name="overdue", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "overdue")]
    public string Overdue { get; set; }

    /// <summary>
    /// Timestamp of asset creation.
    /// </summary>
    /// <value>Timestamp of asset creation.</value>
    [DataMember(Name="create_timestamp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "create_timestamp")]
    public Object CreateTimestamp { get; set; }

    /// <summary>
    /// Timestamp of asset update.
    /// </summary>
    /// <value>Timestamp of asset update.</value>
    [DataMember(Name="update_timestamp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "update_timestamp")]
    public Object UpdateTimestamp { get; set; }

    /// <summary>
    /// Asset identifier for the asset.
    /// </summary>
    /// <value>Asset identifier for the asset.</value>
    [DataMember(Name="asset_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset_id")]
    public string AssetId { get; set; }

    /// <summary>
    /// Name of the asset.
    /// </summary>
    /// <value>Name of the asset.</value>
    [DataMember(Name="asset_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset_name")]
    public string AssetName { get; set; }

    /// <summary>
    /// Rack identifier for the asset.
    /// </summary>
    /// <value>Rack identifier for the asset.</value>
    [DataMember(Name="rack_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack_id")]
    public string RackId { get; set; }

    /// <summary>
    /// Rack name associated with the asset.
    /// </summary>
    /// <value>Rack name associated with the asset.</value>
    [DataMember(Name="rack_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack_name")]
    public string RackName { get; set; }

    /// <summary>
    /// Location of the rack associated with the asset.
    /// </summary>
    /// <value>Location of the rack associated with the asset.</value>
    [DataMember(Name="rack_location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack_location")]
    public string RackLocation { get; set; }

    /// <summary>
    /// Size of the rack associated with the asset.
    /// </summary>
    /// <value>Size of the rack associated with the asset.</value>
    [DataMember(Name="rack_size", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack_size")]
    public string RackSize { get; set; }

    /// <summary>
    /// X-coordinate of the asset within the rack.
    /// </summary>
    /// <value>X-coordinate of the asset within the rack.</value>
    [DataMember(Name="rack_x", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack_x")]
    public string RackX { get; set; }

    /// <summary>
    /// Y-coordinate of the asset within the rack.
    /// </summary>
    /// <value>Y-coordinate of the asset within the rack.</value>
    [DataMember(Name="rack_y", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rack_y")]
    public string RackY { get; set; }

    /// <summary>
    /// Comment associated with the asset.
    /// </summary>
    /// <value>Comment associated with the asset.</value>
    [DataMember(Name="comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "comment")]
    public Object Comment { get; set; }

    /// <summary>
    /// List of switchports associated with the asset.
    /// </summary>
    /// <value>List of switchports associated with the asset.</value>
    [DataMember(Name="switchports", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "switchports")]
    public List<int?> Switchports { get; set; }

    /// <summary>
    /// List of VLANs associated with the asset.
    /// </summary>
    /// <value>List of VLANs associated with the asset.</value>
    [DataMember(Name="vlans", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vlans")]
    public List<string> Vlans { get; set; }

    /// <summary>
    /// List of IPv6 VLANs associated with the asset.
    /// </summary>
    /// <value>List of IPv6 VLANs associated with the asset.</value>
    [DataMember(Name="vlans6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vlans6")]
    public List<string> Vlans6 { get; set; }

    /// <summary>
    /// Gets or Sets Lease
    /// </summary>
    [DataMember(Name="lease", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "lease")]
    public ServerLease Lease { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerAsset {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  OrderId: ").Append(OrderId).Append("\n");
      sb.Append("  Hostname: ").Append(Hostname).Append("\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  PrimaryIpv4: ").Append(PrimaryIpv4).Append("\n");
      sb.Append("  PrimaryIpv6: ").Append(PrimaryIpv6).Append("\n");
      sb.Append("  Mac: ").Append(Mac).Append("\n");
      sb.Append("  Datacenter: ").Append(Datacenter).Append("\n");
      sb.Append("  TypeId: ").Append(TypeId).Append("\n");
      sb.Append("  AssetTag: ").Append(AssetTag).Append("\n");
      sb.Append("  Rack: ").Append(Rack).Append("\n");
      sb.Append("  Row: ").Append(Row).Append("\n");
      sb.Append("  Col: ").Append(Col).Append("\n");
      sb.Append("  UnitStart: ").Append(UnitStart).Append("\n");
      sb.Append("  UnitEnd: ").Append(UnitEnd).Append("\n");
      sb.Append("  UnitSub: ").Append(UnitSub).Append("\n");
      sb.Append("  IpmiMac: ").Append(IpmiMac).Append("\n");
      sb.Append("  IpmiIp: ").Append(IpmiIp).Append("\n");
      sb.Append("  IpmiAdminUsername: ").Append(IpmiAdminUsername).Append("\n");
      sb.Append("  IpmiAdminPassword: ").Append(IpmiAdminPassword).Append("\n");
      sb.Append("  IpmiClientUsername: ").Append(IpmiClientUsername).Append("\n");
      sb.Append("  IpmiClientPassword: ").Append(IpmiClientPassword).Append("\n");
      sb.Append("  IpmiUpdated: ").Append(IpmiUpdated).Append("\n");
      sb.Append("  IpmiWorking: ").Append(IpmiWorking).Append("\n");
      sb.Append("  Company: ").Append(Company).Append("\n");
      sb.Append("  Comments: ").Append(Comments).Append("\n");
      sb.Append("  Make: ").Append(Make).Append("\n");
      sb.Append("  Model: ").Append(Model).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  CustomerId: ").Append(CustomerId).Append("\n");
      sb.Append("  ExternalId: ").Append(ExternalId).Append("\n");
      sb.Append("  BillingStatus: ").Append(BillingStatus).Append("\n");
      sb.Append("  Overdue: ").Append(Overdue).Append("\n");
      sb.Append("  CreateTimestamp: ").Append(CreateTimestamp).Append("\n");
      sb.Append("  UpdateTimestamp: ").Append(UpdateTimestamp).Append("\n");
      sb.Append("  AssetId: ").Append(AssetId).Append("\n");
      sb.Append("  AssetName: ").Append(AssetName).Append("\n");
      sb.Append("  RackId: ").Append(RackId).Append("\n");
      sb.Append("  RackName: ").Append(RackName).Append("\n");
      sb.Append("  RackLocation: ").Append(RackLocation).Append("\n");
      sb.Append("  RackSize: ").Append(RackSize).Append("\n");
      sb.Append("  RackX: ").Append(RackX).Append("\n");
      sb.Append("  RackY: ").Append(RackY).Append("\n");
      sb.Append("  Comment: ").Append(Comment).Append("\n");
      sb.Append("  Switchports: ").Append(Switchports).Append("\n");
      sb.Append("  Vlans: ").Append(Vlans).Append("\n");
      sb.Append("  Vlans6: ").Append(Vlans6).Append("\n");
      sb.Append("  Lease: ").Append(Lease).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}

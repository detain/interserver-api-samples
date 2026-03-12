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
  public class ServerServiceInfo {
    /// <summary>
    /// The ID of the server.
    /// </summary>
    /// <value>The ID of the server.</value>
    [DataMember(Name="server_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_id")]
    public string ServerId { get; set; }

    /// <summary>
    /// The hostname of the server.
    /// </summary>
    /// <value>The hostname of the server.</value>
    [DataMember(Name="server_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_hostname")]
    public string ServerHostname { get; set; }

    /// <summary>
    /// The customer ID associated with the server.
    /// </summary>
    /// <value>The customer ID associated with the server.</value>
    [DataMember(Name="server_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_custid")]
    public string ServerCustid { get; set; }

    /// <summary>
    /// The type of the server.
    /// </summary>
    /// <value>The type of the server.</value>
    [DataMember(Name="server_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_type")]
    public string ServerType { get; set; }

    /// <summary>
    /// The currency used for billing.
    /// </summary>
    /// <value>The currency used for billing.</value>
    [DataMember(Name="server_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_currency")]
    public string ServerCurrency { get; set; }

    /// <summary>
    /// The date when the server was ordered.
    /// </summary>
    /// <value>The date when the server was ordered.</value>
    [DataMember(Name="server_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_order_date")]
    public string ServerOrderDate { get; set; }

    /// <summary>
    /// The invoice number for the server.
    /// </summary>
    /// <value>The invoice number for the server.</value>
    [DataMember(Name="server_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_invoice")]
    public string ServerInvoice { get; set; }

    /// <summary>
    /// The coupon associated with the server.
    /// </summary>
    /// <value>The coupon associated with the server.</value>
    [DataMember(Name="server_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_coupon")]
    public string ServerCoupon { get; set; }

    /// <summary>
    /// The status of the server.
    /// </summary>
    /// <value>The status of the server.</value>
    [DataMember(Name="server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_status")]
    public string ServerStatus { get; set; }

    /// <summary>
    /// The root of the server.
    /// </summary>
    /// <value>The root of the server.</value>
    [DataMember(Name="server_root", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_root")]
    public string ServerRoot { get; set; }

    /// <summary>
    /// The dedicated tag of the server.
    /// </summary>
    /// <value>The dedicated tag of the server.</value>
    [DataMember(Name="server_dedicated_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_tag")]
    public string ServerDedicatedTag { get; set; }

    /// <summary>
    /// The custom tag of the server.
    /// </summary>
    /// <value>The custom tag of the server.</value>
    [DataMember(Name="server_custom_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_custom_tag")]
    public string ServerCustomTag { get; set; }

    /// <summary>
    /// Comments related to the server.
    /// </summary>
    /// <value>Comments related to the server.</value>
    [DataMember(Name="server_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_comment")]
    public string ServerComment { get; set; }

    /// <summary>
    /// The initial billing amount for the server.
    /// </summary>
    /// <value>The initial billing amount for the server.</value>
    [DataMember(Name="server_initial_bill", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_initial_bill")]
    public string ServerInitialBill { get; set; }

    /// <summary>
    /// The hardware information of the server.
    /// </summary>
    /// <value>The hardware information of the server.</value>
    [DataMember(Name="server_hardware", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_hardware")]
    public string ServerHardware { get; set; }

    /// <summary>
    /// The number of IPs associated with the server.
    /// </summary>
    /// <value>The number of IPs associated with the server.</value>
    [DataMember(Name="server_ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_ips")]
    public string ServerIps { get; set; }

    /// <summary>
    /// The monthly billing amount for the server.
    /// </summary>
    /// <value>The monthly billing amount for the server.</value>
    [DataMember(Name="server_monthly_bill", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_monthly_bill")]
    public string ServerMonthlyBill { get; set; }

    /// <summary>
    /// The setup status of the server.
    /// </summary>
    /// <value>The setup status of the server.</value>
    [DataMember(Name="server_setup", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_setup")]
    public string ServerSetup { get; set; }

    /// <summary>
    /// Discount information for the server.
    /// </summary>
    /// <value>Discount information for the server.</value>
    [DataMember(Name="server_discount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_discount")]
    public Object ServerDiscount { get; set; }

    /// <summary>
    /// The reputation of the server.
    /// </summary>
    /// <value>The reputation of the server.</value>
    [DataMember(Name="server_rep", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_rep")]
    public string ServerRep { get; set; }

    /// <summary>
    /// The date related to the server.
    /// </summary>
    /// <value>The date related to the server.</value>
    [DataMember(Name="server_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_date")]
    public string ServerDate { get; set; }

    /// <summary>
    /// The total cost of the server.
    /// </summary>
    /// <value>The total cost of the server.</value>
    [DataMember(Name="server_total_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_total_cost")]
    public string ServerTotalCost { get; set; }

    /// <summary>
    /// The location of the server.
    /// </summary>
    /// <value>The location of the server.</value>
    [DataMember(Name="server_location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_location")]
    public Object ServerLocation { get; set; }

    /// <summary>
    /// The ordered hardware for the server.
    /// </summary>
    /// <value>The ordered hardware for the server.</value>
    [DataMember(Name="server_hardware_ordered", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_hardware_ordered")]
    public string ServerHardwareOrdered { get; set; }

    /// <summary>
    /// The billed amount for the server.
    /// </summary>
    /// <value>The billed amount for the server.</value>
    [DataMember(Name="server_billed", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_billed")]
    public string ServerBilled { get; set; }

    /// <summary>
    /// Indicates whether a welcome email was sent.
    /// </summary>
    /// <value>Indicates whether a welcome email was sent.</value>
    [DataMember(Name="server_welcome_email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_welcome_email")]
    public string ServerWelcomeEmail { get; set; }

    /// <summary>
    /// The number of dedicated CPUs for the server.
    /// </summary>
    /// <value>The number of dedicated CPUs for the server.</value>
    [DataMember(Name="server_dedicated_cpu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_cpu")]
    public string ServerDedicatedCpu { get; set; }

    /// <summary>
    /// The amount of dedicated memory for the server.
    /// </summary>
    /// <value>The amount of dedicated memory for the server.</value>
    [DataMember(Name="server_dedicated_memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_memory")]
    public string ServerDedicatedMemory { get; set; }

    /// <summary>
    /// The size of the first dedicated hard drive.
    /// </summary>
    /// <value>The size of the first dedicated hard drive.</value>
    [DataMember(Name="server_dedicated_hd1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_hd1")]
    public string ServerDedicatedHd1 { get; set; }

    /// <summary>
    /// The size of the second dedicated hard drive.
    /// </summary>
    /// <value>The size of the second dedicated hard drive.</value>
    [DataMember(Name="server_dedicated_hd2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_hd2")]
    public Object ServerDedicatedHd2 { get; set; }

    /// <summary>
    /// The bandwidth of the server.
    /// </summary>
    /// <value>The bandwidth of the server.</value>
    [DataMember(Name="server_dedicated_bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_bandwidth")]
    public string ServerDedicatedBandwidth { get; set; }

    /// <summary>
    /// The number of dedicated IPs for the server.
    /// </summary>
    /// <value>The number of dedicated IPs for the server.</value>
    [DataMember(Name="server_dedicated_ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_ips")]
    public string ServerDedicatedIps { get; set; }

    /// <summary>
    /// The operating system of the server.
    /// </summary>
    /// <value>The operating system of the server.</value>
    [DataMember(Name="server_dedicated_os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_os")]
    public string ServerDedicatedOs { get; set; }

    /// <summary>
    /// The control panel of the server.
    /// </summary>
    /// <value>The control panel of the server.</value>
    [DataMember(Name="server_dedicated_cp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_cp")]
    public Object ServerDedicatedCp { get; set; }

    /// <summary>
    /// The RAID configuration of the server.
    /// </summary>
    /// <value>The RAID configuration of the server.</value>
    [DataMember(Name="server_dedicated_raid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_dedicated_raid")]
    public string ServerDedicatedRaid { get; set; }

    /// <summary>
    /// Additional information about the server.
    /// </summary>
    /// <value>Additional information about the server.</value>
    [DataMember(Name="server_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_extra")]
    public string ServerExtra { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerServiceInfo {\n");
      sb.Append("  ServerId: ").Append(ServerId).Append("\n");
      sb.Append("  ServerHostname: ").Append(ServerHostname).Append("\n");
      sb.Append("  ServerCustid: ").Append(ServerCustid).Append("\n");
      sb.Append("  ServerType: ").Append(ServerType).Append("\n");
      sb.Append("  ServerCurrency: ").Append(ServerCurrency).Append("\n");
      sb.Append("  ServerOrderDate: ").Append(ServerOrderDate).Append("\n");
      sb.Append("  ServerInvoice: ").Append(ServerInvoice).Append("\n");
      sb.Append("  ServerCoupon: ").Append(ServerCoupon).Append("\n");
      sb.Append("  ServerStatus: ").Append(ServerStatus).Append("\n");
      sb.Append("  ServerRoot: ").Append(ServerRoot).Append("\n");
      sb.Append("  ServerDedicatedTag: ").Append(ServerDedicatedTag).Append("\n");
      sb.Append("  ServerCustomTag: ").Append(ServerCustomTag).Append("\n");
      sb.Append("  ServerComment: ").Append(ServerComment).Append("\n");
      sb.Append("  ServerInitialBill: ").Append(ServerInitialBill).Append("\n");
      sb.Append("  ServerHardware: ").Append(ServerHardware).Append("\n");
      sb.Append("  ServerIps: ").Append(ServerIps).Append("\n");
      sb.Append("  ServerMonthlyBill: ").Append(ServerMonthlyBill).Append("\n");
      sb.Append("  ServerSetup: ").Append(ServerSetup).Append("\n");
      sb.Append("  ServerDiscount: ").Append(ServerDiscount).Append("\n");
      sb.Append("  ServerRep: ").Append(ServerRep).Append("\n");
      sb.Append("  ServerDate: ").Append(ServerDate).Append("\n");
      sb.Append("  ServerTotalCost: ").Append(ServerTotalCost).Append("\n");
      sb.Append("  ServerLocation: ").Append(ServerLocation).Append("\n");
      sb.Append("  ServerHardwareOrdered: ").Append(ServerHardwareOrdered).Append("\n");
      sb.Append("  ServerBilled: ").Append(ServerBilled).Append("\n");
      sb.Append("  ServerWelcomeEmail: ").Append(ServerWelcomeEmail).Append("\n");
      sb.Append("  ServerDedicatedCpu: ").Append(ServerDedicatedCpu).Append("\n");
      sb.Append("  ServerDedicatedMemory: ").Append(ServerDedicatedMemory).Append("\n");
      sb.Append("  ServerDedicatedHd1: ").Append(ServerDedicatedHd1).Append("\n");
      sb.Append("  ServerDedicatedHd2: ").Append(ServerDedicatedHd2).Append("\n");
      sb.Append("  ServerDedicatedBandwidth: ").Append(ServerDedicatedBandwidth).Append("\n");
      sb.Append("  ServerDedicatedIps: ").Append(ServerDedicatedIps).Append("\n");
      sb.Append("  ServerDedicatedOs: ").Append(ServerDedicatedOs).Append("\n");
      sb.Append("  ServerDedicatedCp: ").Append(ServerDedicatedCp).Append("\n");
      sb.Append("  ServerDedicatedRaid: ").Append(ServerDedicatedRaid).Append("\n");
      sb.Append("  ServerExtra: ").Append(ServerExtra).Append("\n");
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

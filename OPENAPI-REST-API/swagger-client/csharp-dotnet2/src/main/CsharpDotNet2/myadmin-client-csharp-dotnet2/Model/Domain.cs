using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Full detail view of a domain service including billing, contacts, DNS, and configuration.
  /// </summary>
  [DataContract]
  public class Domain {
    /// <summary>
    /// Gets or Sets ServiceInfo
    /// </summary>
    [DataMember(Name="serviceInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceInfo")]
    public DomainServiceInfo ServiceInfo { get; set; }

    /// <summary>
    /// Gets or Sets ServiceTypes
    /// </summary>
    [DataMember(Name="serviceTypes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceTypes")]
    public Dictionary<string, DomainServiceType> ServiceTypes { get; set; }

    /// <summary>
    /// Gets or Sets ClientLinks
    /// </summary>
    [DataMember(Name="client_links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_links")]
    public List<DomainClientLink> ClientLinks { get; set; }

    /// <summary>
    /// Gets or Sets BillingDetails
    /// </summary>
    [DataMember(Name="billingDetails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billingDetails")]
    public DomainBillingDetails BillingDetails { get; set; }

    /// <summary>
    /// Gets or Sets CustCurrency
    /// </summary>
    [DataMember(Name="custCurrency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrency")]
    public string CustCurrency { get; set; }

    /// <summary>
    /// Gets or Sets CustCurrencySymbol
    /// </summary>
    [DataMember(Name="custCurrencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrencySymbol")]
    public string CustCurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="serviceExtra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceExtra")]
    public DomainBillingExtra ServiceExtra { get; set; }

    /// <summary>
    /// Gets or Sets ExtraInfoTables
    /// </summary>
    [DataMember(Name="extraInfoTables", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extraInfoTables")]
    public BackupExtraInfoTables ExtraInfoTables { get; set; }

    /// <summary>
    /// Gets or Sets ServiceType
    /// </summary>
    [DataMember(Name="serviceType", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceType")]
    public DomainServiceType ServiceType { get; set; }

    /// <summary>
    /// Gets or Sets ContactDetails
    /// </summary>
    [DataMember(Name="contact_details", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "contact_details")]
    public DomainContactDetails ContactDetails { get; set; }

    /// <summary>
    /// Gets or Sets Pwarning
    /// </summary>
    [DataMember(Name="pwarning", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "pwarning")]
    public string Pwarning { get; set; }

    /// <summary>
    /// Gets or Sets TransferInfo
    /// </summary>
    [DataMember(Name="transfer_info", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "transfer_info")]
    public string TransferInfo { get; set; }

    /// <summary>
    /// Gets or Sets Errors
    /// </summary>
    [DataMember(Name="errors", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "errors")]
    public bool? Errors { get; set; }

    /// <summary>
    /// Gets or Sets DomainLogs
    /// </summary>
    [DataMember(Name="domain_logs", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_logs")]
    public List<string> DomainLogs { get; set; }

    /// <summary>
    /// Gets or Sets AllInfo
    /// </summary>
    [DataMember(Name="allInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "allInfo")]
    public DomainAllInfo AllInfo { get; set; }

    /// <summary>
    /// Gets or Sets RegistrarStatus
    /// </summary>
    [DataMember(Name="registrarStatus", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "registrarStatus")]
    public string RegistrarStatus { get; set; }

    /// <summary>
    /// Gets or Sets Locked
    /// </summary>
    [DataMember(Name="locked", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locked")]
    public string Locked { get; set; }

    /// <summary>
    /// Gets or Sets WhoisPrivacy
    /// </summary>
    [DataMember(Name="whoisPrivacy", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "whoisPrivacy")]
    public string WhoisPrivacy { get; set; }

    /// <summary>
    /// Gets or Sets AutoRenew
    /// </summary>
    [DataMember(Name="autoRenew", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "autoRenew")]
    public string AutoRenew { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Domain {\n");
      sb.Append("  ServiceInfo: ").Append(ServiceInfo).Append("\n");
      sb.Append("  ServiceTypes: ").Append(ServiceTypes).Append("\n");
      sb.Append("  ClientLinks: ").Append(ClientLinks).Append("\n");
      sb.Append("  BillingDetails: ").Append(BillingDetails).Append("\n");
      sb.Append("  CustCurrency: ").Append(CustCurrency).Append("\n");
      sb.Append("  CustCurrencySymbol: ").Append(CustCurrencySymbol).Append("\n");
      sb.Append("  ServiceExtra: ").Append(ServiceExtra).Append("\n");
      sb.Append("  ExtraInfoTables: ").Append(ExtraInfoTables).Append("\n");
      sb.Append("  ServiceType: ").Append(ServiceType).Append("\n");
      sb.Append("  ContactDetails: ").Append(ContactDetails).Append("\n");
      sb.Append("  Pwarning: ").Append(Pwarning).Append("\n");
      sb.Append("  TransferInfo: ").Append(TransferInfo).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("  DomainLogs: ").Append(DomainLogs).Append("\n");
      sb.Append("  AllInfo: ").Append(AllInfo).Append("\n");
      sb.Append("  RegistrarStatus: ").Append(RegistrarStatus).Append("\n");
      sb.Append("  Locked: ").Append(Locked).Append("\n");
      sb.Append("  WhoisPrivacy: ").Append(WhoisPrivacy).Append("\n");
      sb.Append("  AutoRenew: ").Append(AutoRenew).Append("\n");
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

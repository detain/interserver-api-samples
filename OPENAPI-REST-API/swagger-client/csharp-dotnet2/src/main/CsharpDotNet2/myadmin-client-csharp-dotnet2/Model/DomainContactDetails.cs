using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Contact details used for domain registrant/admin/technical/billing records.
  /// </summary>
  [DataContract]
  public class DomainContactDetails {
    /// <summary>
    /// Contact status reported by the registrar.
    /// </summary>
    /// <value>Contact status reported by the registrar.</value>
    [DataMember(Name="status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "status")]
    public string Status { get; set; }

    /// <summary>
    /// State or region for the contact address.
    /// </summary>
    /// <value>State or region for the contact address.</value>
    [DataMember(Name="state", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "state")]
    public string State { get; set; }

    /// <summary>
    /// Organization name for the contact.
    /// </summary>
    /// <value>Organization name for the contact.</value>
    [DataMember(Name="org_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "org_name")]
    public string OrgName { get; set; }

    /// <summary>
    /// Two-letter country code for the contact.
    /// </summary>
    /// <value>Two-letter country code for the contact.</value>
    [DataMember(Name="country", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "country")]
    public string Country { get; set; }

    /// <summary>
    /// Postal or ZIP code for the contact address.
    /// </summary>
    /// <value>Postal or ZIP code for the contact address.</value>
    [DataMember(Name="postal_code", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "postal_code")]
    public string PostalCode { get; set; }

    /// <summary>
    /// Email address for the contact.
    /// </summary>
    /// <value>Email address for the contact.</value>
    [DataMember(Name="email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email")]
    public string Email { get; set; }

    /// <summary>
    /// Fax number for the contact, if available.
    /// </summary>
    /// <value>Fax number for the contact, if available.</value>
    [DataMember(Name="fax", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "fax")]
    public string Fax { get; set; }

    /// <summary>
    /// Secondary street address line.
    /// </summary>
    /// <value>Secondary street address line.</value>
    [DataMember(Name="address2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address2")]
    public string Address2 { get; set; }

    /// <summary>
    /// Tertiary street address line.
    /// </summary>
    /// <value>Tertiary street address line.</value>
    [DataMember(Name="address3", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address3")]
    public string Address3 { get; set; }

    /// <summary>
    /// Primary street address line.
    /// </summary>
    /// <value>Primary street address line.</value>
    [DataMember(Name="address1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address1")]
    public string Address1 { get; set; }

    /// <summary>
    /// City for the contact address.
    /// </summary>
    /// <value>City for the contact address.</value>
    [DataMember(Name="city", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "city")]
    public string City { get; set; }

    /// <summary>
    /// Phone number for the contact.
    /// </summary>
    /// <value>Phone number for the contact.</value>
    [DataMember(Name="phone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "phone")]
    public string Phone { get; set; }

    /// <summary>
    /// First name for the contact.
    /// </summary>
    /// <value>First name for the contact.</value>
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "first_name")]
    public string FirstName { get; set; }

    /// <summary>
    /// Last name for the contact.
    /// </summary>
    /// <value>Last name for the contact.</value>
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "last_name")]
    public string LastName { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainContactDetails {\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  OrgName: ").Append(OrgName).Append("\n");
      sb.Append("  Country: ").Append(Country).Append("\n");
      sb.Append("  PostalCode: ").Append(PostalCode).Append("\n");
      sb.Append("  Email: ").Append(Email).Append("\n");
      sb.Append("  Fax: ").Append(Fax).Append("\n");
      sb.Append("  Address2: ").Append(Address2).Append("\n");
      sb.Append("  Address3: ").Append(Address3).Append("\n");
      sb.Append("  Address1: ").Append(Address1).Append("\n");
      sb.Append("  City: ").Append(City).Append("\n");
      sb.Append("  Phone: ").Append(Phone).Append("\n");
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      sb.Append("  LastName: ").Append(LastName).Append("\n");
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

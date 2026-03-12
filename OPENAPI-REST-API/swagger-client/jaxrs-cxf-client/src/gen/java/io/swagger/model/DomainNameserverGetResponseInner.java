package io.swagger.model;


import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class DomainNameserverGetResponseInner   {
  
  @Schema(example = "ns1.domain.com", required = true, description = "")
  private String name = null;
  
  @Schema(example = "1.2.3.4", required = true, description = "")
  private String ipaddress = null;
  public enum CanDeleteEnum {
    _0("0"),
    _1("1");

    private String value;

    CanDeleteEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
    @JsonCreator
    public static CanDeleteEnum fromValue(String text) {
      for (CanDeleteEnum b : CanDeleteEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }  
  @Schema(example = "1", required = true, description = "Whether the registrar allows deletion of this nameserver entry.")
 /**
   * Whether the registrar allows deletion of this nameserver entry.  
  **/
  private CanDeleteEnum canDelete = null;
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public DomainNameserverGetResponseInner name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get ipaddress
   * @return ipaddress
  **/
  @JsonProperty("ipaddress")
  public String getIpaddress() {
    return ipaddress;
  }

  public void setIpaddress(String ipaddress) {
    this.ipaddress = ipaddress;
  }

  public DomainNameserverGetResponseInner ipaddress(String ipaddress) {
    this.ipaddress = ipaddress;
    return this;
  }

 /**
   * Whether the registrar allows deletion of this nameserver entry.
   * @return canDelete
  **/
  @JsonProperty("can_delete")
  public String getCanDelete() {
    if (canDelete == null) {
      return null;
    }
    return canDelete.getValue();
  }

  public void setCanDelete(CanDeleteEnum canDelete) {
    this.canDelete = canDelete;
  }

  public DomainNameserverGetResponseInner canDelete(CanDeleteEnum canDelete) {
    this.canDelete = canDelete;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainNameserverGetResponseInner {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    ipaddress: ").append(toIndentedString(ipaddress)).append("\n");
    sb.append("    canDelete: ").append(toIndentedString(canDelete)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class DomainNameserverGetResponseInner   {
  private String name = null;
  private String ipaddress = null;
@XmlType(name="CanDeleteEnum")
@XmlEnum(String.class)
public enum CanDeleteEnum {

    @XmlEnumValue("0") _0(String.valueOf("0")), @XmlEnumValue("1") _1(String.valueOf("1"));


    private String value;

    CanDeleteEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static CanDeleteEnum fromValue(String v) {
        for (CanDeleteEnum b : CanDeleteEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private CanDeleteEnum canDelete = null;

  /**
   **/
  public DomainNameserverGetResponseInner name(String name) {
    this.name = name;
    return this;
  }

  
  
  @Schema(example = "ns1.domain.com", required = true, description = "")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public DomainNameserverGetResponseInner ipaddress(String ipaddress) {
    this.ipaddress = ipaddress;
    return this;
  }

  
  
  @Schema(example = "1.2.3.4", required = true, description = "")
  @JsonProperty("ipaddress")
  @NotNull
  public String getIpaddress() {
    return ipaddress;
  }
  public void setIpaddress(String ipaddress) {
    this.ipaddress = ipaddress;
  }

  /**
   * Whether the registrar allows deletion of this nameserver entry.
   **/
  public DomainNameserverGetResponseInner canDelete(CanDeleteEnum canDelete) {
    this.canDelete = canDelete;
    return this;
  }

  
  
  @Schema(example = "1", required = true, description = "Whether the registrar allows deletion of this nameserver entry.")
  @JsonProperty("can_delete")
  @NotNull
  public CanDeleteEnum getCanDelete() {
    return canDelete;
  }
  public void setCanDelete(CanDeleteEnum canDelete) {
    this.canDelete = canDelete;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainNameserverGetResponseInner domainNameserverGetResponseInner = (DomainNameserverGetResponseInner) o;
    return Objects.equals(name, domainNameserverGetResponseInner.name) &&
        Objects.equals(ipaddress, domainNameserverGetResponseInner.ipaddress) &&
        Objects.equals(canDelete, domainNameserverGetResponseInner.canDelete);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, ipaddress, canDelete);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

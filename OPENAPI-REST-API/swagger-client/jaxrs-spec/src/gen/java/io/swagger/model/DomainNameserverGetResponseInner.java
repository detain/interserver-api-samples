package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainNameserverGetResponseInner   {

  private @Valid String name = null;

  private @Valid String ipaddress = null;

public enum CanDeleteEnum {

    _0(String.valueOf("0")), _1(String.valueOf("1"));


    private String value;

    CanDeleteEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static CanDeleteEnum fromValue(String v) {
        for (CanDeleteEnum b : CanDeleteEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid CanDeleteEnum canDelete = null;

  /**
   **/
  public DomainNameserverGetResponseInner name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "ns1.domain.com", required = true, value = "")
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

  
  @ApiModelProperty(example = "1.2.3.4", required = true, value = "")
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

  
  @ApiModelProperty(example = "1", required = true, value = "Whether the registrar allows deletion of this nameserver entry.")
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

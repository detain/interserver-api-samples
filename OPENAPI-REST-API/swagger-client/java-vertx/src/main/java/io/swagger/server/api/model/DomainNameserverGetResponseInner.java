package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * DomainNameserverGetResponseInner
 */




public class DomainNameserverGetResponseInner   {
  private String name = null;

  private String ipaddress = null;

  /**
   * Whether the registrar allows deletion of this nameserver entry.
   */
  public enum CanDeleteEnum {
    _0("0"),
    _1("1");

    private String value;

    CanDeleteEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static CanDeleteEnum fromValue(String value) {
      for (CanDeleteEnum b : CanDeleteEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }

  }
  private CanDeleteEnum canDelete = null;

  public DomainNameserverGetResponseInner name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
   **/
    public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public DomainNameserverGetResponseInner ipaddress(String ipaddress) {
    this.ipaddress = ipaddress;
    return this;
  }

  /**
   * Get ipaddress
   * @return ipaddress
   **/
    public String getIpaddress() {
    return ipaddress;
  }

  public void setIpaddress(String ipaddress) {
    this.ipaddress = ipaddress;
  }

  public DomainNameserverGetResponseInner canDelete(CanDeleteEnum canDelete) {
    this.canDelete = canDelete;
    return this;
  }

  /**
   * Whether the registrar allows deletion of this nameserver entry.
   * @return canDelete
   **/
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
    return Objects.equals(this.name, domainNameserverGetResponseInner.name) &&
        Objects.equals(this.ipaddress, domainNameserverGetResponseInner.ipaddress) &&
        Objects.equals(this.canDelete, domainNameserverGetResponseInner.canDelete);
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

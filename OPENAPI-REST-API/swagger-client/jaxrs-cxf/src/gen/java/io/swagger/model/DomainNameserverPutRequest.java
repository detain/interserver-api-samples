package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

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

/**
  * Payload for replacing the assigned nameserver list for a domain.
 **/
@Schema(description="Payload for replacing the assigned nameserver list for a domain.")
public class DomainNameserverPutRequest   {
  
  @Schema(required = true, description = "")
  private List<String> nameserver = new ArrayList<String>();
 /**
   * Get nameserver
   * @return nameserver
  **/
  @JsonProperty("nameserver")
  @NotNull
  public List<String> getNameserver() {
    return nameserver;
  }

  public void setNameserver(List<String> nameserver) {
    this.nameserver = nameserver;
  }

  public DomainNameserverPutRequest nameserver(List<String> nameserver) {
    this.nameserver = nameserver;
    return this;
  }

  public DomainNameserverPutRequest addNameserverItem(String nameserverItem) {
    this.nameserver.add(nameserverItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainNameserverPutRequest {\n");
    
    sb.append("    nameserver: ").append(toIndentedString(nameserver)).append("\n");
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

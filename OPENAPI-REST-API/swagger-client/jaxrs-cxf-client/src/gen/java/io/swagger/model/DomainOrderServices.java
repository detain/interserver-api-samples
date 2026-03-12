package io.swagger.model;

import io.swagger.model.DomainOrderServices10001;
import io.swagger.v3.oas.annotations.media.Schema;

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
  * Available domain service catalog entries keyed by service ID.
 **/
@Schema(description="Available domain service catalog entries keyed by service ID.")
public class DomainOrderServices   {
  
  @Schema(description = "")
  private DomainOrderServices10001 domainOrderServices10001 = null;
 /**
   * Get domainOrderServices10001
   * @return domainOrderServices10001
  **/
  @JsonProperty("DomainOrderServices10001")
  public DomainOrderServices10001 getDomainOrderServices10001() {
    return domainOrderServices10001;
  }

  public void setDomainOrderServices10001(DomainOrderServices10001 domainOrderServices10001) {
    this.domainOrderServices10001 = domainOrderServices10001;
  }

  public DomainOrderServices domainOrderServices10001(DomainOrderServices10001 domainOrderServices10001) {
    this.domainOrderServices10001 = domainOrderServices10001;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderServices {\n");
    
    sb.append("    domainOrderServices10001: ").append(toIndentedString(domainOrderServices10001)).append("\n");
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

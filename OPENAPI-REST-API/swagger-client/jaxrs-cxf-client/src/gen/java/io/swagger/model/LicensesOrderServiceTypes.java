package io.swagger.model;

import io.swagger.model.LicensesOrderServiceTypes11482;
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
  * Types of license services
 **/
@Schema(description="Types of license services")
public class LicensesOrderServiceTypes   {
  
  @Schema(description = "")
  private LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482 = null;
 /**
   * Get licensesOrderServiceTypes11482
   * @return licensesOrderServiceTypes11482
  **/
  @JsonProperty("LicensesOrderServiceTypes11482")
  public LicensesOrderServiceTypes11482 getLicensesOrderServiceTypes11482() {
    return licensesOrderServiceTypes11482;
  }

  public void setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
  }

  public LicensesOrderServiceTypes licensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceTypes {\n");
    
    sb.append("    licensesOrderServiceTypes11482: ").append(toIndentedString(licensesOrderServiceTypes11482)).append("\n");
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

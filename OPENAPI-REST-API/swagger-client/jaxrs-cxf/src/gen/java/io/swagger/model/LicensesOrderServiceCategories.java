package io.swagger.model;

import io.swagger.model.LicensesOrderServiceCategories509;
import io.swagger.v3.oas.annotations.media.Schema;
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
  * License service categories
 **/
@Schema(description="License service categories")
public class LicensesOrderServiceCategories   {
  
  @Schema(description = "")
  private LicensesOrderServiceCategories509 licensesOrderServiceCategories509 = null;
 /**
   * Get licensesOrderServiceCategories509
   * @return licensesOrderServiceCategories509
  **/
  @JsonProperty("LicensesOrderServiceCategories509")
  @NotNull
  public LicensesOrderServiceCategories509 getLicensesOrderServiceCategories509() {
    return licensesOrderServiceCategories509;
  }

  public void setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509) {
    this.licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
  }

  public LicensesOrderServiceCategories licensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509) {
    this.licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceCategories {\n");
    
    sb.append("    licensesOrderServiceCategories509: ").append(toIndentedString(licensesOrderServiceCategories509)).append("\n");
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

package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;

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
  * Platform Packages
 **/
@Schema(description="Platform Packages")
public class VpsOrderPlatformPackages   {
  
  @Schema(example = "32", description = "")
  private BigDecimal kvm = null;
  
  @Schema(example = "57", description = "")
  private BigDecimal kvmstorage = null;
  
  @Schema(example = "54", description = "")
  private BigDecimal hyperv = null;
 /**
   * Get kvm
   * @return kvm
  **/
  @JsonProperty("kvm")
  public BigDecimal getKvm() {
    return kvm;
  }

  public void setKvm(BigDecimal kvm) {
    this.kvm = kvm;
  }

  public VpsOrderPlatformPackages kvm(BigDecimal kvm) {
    this.kvm = kvm;
    return this;
  }

 /**
   * Get kvmstorage
   * @return kvmstorage
  **/
  @JsonProperty("kvmstorage")
  public BigDecimal getKvmstorage() {
    return kvmstorage;
  }

  public void setKvmstorage(BigDecimal kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  public VpsOrderPlatformPackages kvmstorage(BigDecimal kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  public BigDecimal getHyperv() {
    return hyperv;
  }

  public void setHyperv(BigDecimal hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderPlatformPackages hyperv(BigDecimal hyperv) {
    this.hyperv = hyperv;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPlatformPackages {\n");
    
    sb.append("    kvm: ").append(toIndentedString(kvm)).append("\n");
    sb.append("    kvmstorage: ").append(toIndentedString(kvmstorage)).append("\n");
    sb.append("    hyperv: ").append(toIndentedString(hyperv)).append("\n");
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

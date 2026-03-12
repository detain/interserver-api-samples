package io.swagger.model;

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
  * Platform Names
 **/
@Schema(description="Platform Names")
public class VpsOrderPlatformNames   {
  
  @Schema(example = "KVM", description = "")
  private String kvm = null;
  
  @Schema(example = "KVM Storage", description = "")
  private String kvmstorage = null;
  
  @Schema(example = "HyperV", description = "")
  private String hyperv = null;
 /**
   * Get kvm
   * @return kvm
  **/
  @JsonProperty("kvm")
  @NotNull
  public String getKvm() {
    return kvm;
  }

  public void setKvm(String kvm) {
    this.kvm = kvm;
  }

  public VpsOrderPlatformNames kvm(String kvm) {
    this.kvm = kvm;
    return this;
  }

 /**
   * Get kvmstorage
   * @return kvmstorage
  **/
  @JsonProperty("kvmstorage")
  @NotNull
  public String getKvmstorage() {
    return kvmstorage;
  }

  public void setKvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  public VpsOrderPlatformNames kvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  @NotNull
  public String getHyperv() {
    return hyperv;
  }

  public void setHyperv(String hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderPlatformNames hyperv(String hyperv) {
    this.hyperv = hyperv;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPlatformNames {\n");
    
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

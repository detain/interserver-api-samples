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

public class VpsOrderLocationStock1   {
  
  @Schema(example = "true", description = "")
  private Boolean kvm = null;
  
  @Schema(example = "true", description = "")
  private Boolean kvmstorage = null;
  
  @Schema(example = "true", description = "")
  private Boolean hyperv = null;
 /**
   * Get kvm
   * @return kvm
  **/
  @JsonProperty("kvm")
  public Boolean isKvm() {
    return kvm;
  }

  public void setKvm(Boolean kvm) {
    this.kvm = kvm;
  }

  public VpsOrderLocationStock1 kvm(Boolean kvm) {
    this.kvm = kvm;
    return this;
  }

 /**
   * Get kvmstorage
   * @return kvmstorage
  **/
  @JsonProperty("kvmstorage")
  public Boolean isKvmstorage() {
    return kvmstorage;
  }

  public void setKvmstorage(Boolean kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  public VpsOrderLocationStock1 kvmstorage(Boolean kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  public Boolean isHyperv() {
    return hyperv;
  }

  public void setHyperv(Boolean hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderLocationStock1 hyperv(Boolean hyperv) {
    this.hyperv = hyperv;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderLocationStock1 {\n");
    
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

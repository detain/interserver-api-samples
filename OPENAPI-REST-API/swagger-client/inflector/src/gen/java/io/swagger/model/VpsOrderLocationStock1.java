package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class VpsOrderLocationStock1   {
  @JsonProperty("kvm")
  private Boolean kvm = null;
  @JsonProperty("kvmstorage")
  private Boolean kvmstorage = null;
  @JsonProperty("hyperv")
  private Boolean hyperv = null;
  /**
   **/
  public VpsOrderLocationStock1 kvm(Boolean kvm) {
    this.kvm = kvm;
    return this;
  }

  
  @Schema(example = "true", description = "")
  @JsonProperty("kvm")
  public Boolean isKvm() {
    return kvm;
  }
  public void setKvm(Boolean kvm) {
    this.kvm = kvm;
  }

  /**
   **/
  public VpsOrderLocationStock1 kvmstorage(Boolean kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

  
  @Schema(example = "true", description = "")
  @JsonProperty("kvmstorage")
  public Boolean isKvmstorage() {
    return kvmstorage;
  }
  public void setKvmstorage(Boolean kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  /**
   **/
  public VpsOrderLocationStock1 hyperv(Boolean hyperv) {
    this.hyperv = hyperv;
    return this;
  }

  
  @Schema(example = "true", description = "")
  @JsonProperty("hyperv")
  public Boolean isHyperv() {
    return hyperv;
  }
  public void setHyperv(Boolean hyperv) {
    this.hyperv = hyperv;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderLocationStock1 vpsOrderLocationStock1 = (VpsOrderLocationStock1) o;
    return Objects.equals(kvm, vpsOrderLocationStock1.kvm) &&
        Objects.equals(kvmstorage, vpsOrderLocationStock1.kvmstorage) &&
        Objects.equals(hyperv, vpsOrderLocationStock1.hyperv);
  }

  @Override
  public int hashCode() {
    return Objects.hash(kvm, kvmstorage, hyperv);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

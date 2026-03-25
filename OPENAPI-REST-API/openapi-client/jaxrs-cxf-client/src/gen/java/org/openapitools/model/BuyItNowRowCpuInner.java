package org.openapitools.model;

import org.openapitools.model.BuyItNowRowCpuInnerOneOf;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BuyItNowRowCpuInner  {
  
  @ApiModelProperty(example = "xeon-e3.png", value = "")

  private String img;

  @ApiModelProperty(example = "XEON", value = "")

  private String type;

  @ApiModelProperty(example = "", value = "")

  private String speed;

  @ApiModelProperty(example = "1", value = "")

  private String numCpus;

  @ApiModelProperty(example = "4", value = "")

  private String numCores;
 /**
   * Get img
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public BuyItNowRowCpuInner img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Get type
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public BuyItNowRowCpuInner type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Get speed
   * @return speed
  **/
  @JsonProperty("speed")
  public String getSpeed() {
    return speed;
  }

  public void setSpeed(String speed) {
    this.speed = speed;
  }

  public BuyItNowRowCpuInner speed(String speed) {
    this.speed = speed;
    return this;
  }

 /**
   * Get numCpus
   * @return numCpus
  **/
  @JsonProperty("num_cpus")
  public String getNumCpus() {
    return numCpus;
  }

  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  public BuyItNowRowCpuInner numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

 /**
   * Get numCores
   * @return numCores
  **/
  @JsonProperty("num_cores")
  public String getNumCores() {
    return numCores;
  }

  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  public BuyItNowRowCpuInner numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BuyItNowRowCpuInner buyItNowRowCpuInner = (BuyItNowRowCpuInner) o;
    return Objects.equals(this.img, buyItNowRowCpuInner.img) &&
        Objects.equals(this.type, buyItNowRowCpuInner.type) &&
        Objects.equals(this.speed, buyItNowRowCpuInner.speed) &&
        Objects.equals(this.numCpus, buyItNowRowCpuInner.numCpus) &&
        Objects.equals(this.numCores, buyItNowRowCpuInner.numCores);
  }

  @Override
  public int hashCode() {
    return Objects.hash(img, type, speed, numCpus, numCores);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowRowCpuInner {\n");
    
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    speed: ").append(toIndentedString(speed)).append("\n");
    sb.append("    numCpus: ").append(toIndentedString(numCpus)).append("\n");
    sb.append("    numCores: ").append(toIndentedString(numCores)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


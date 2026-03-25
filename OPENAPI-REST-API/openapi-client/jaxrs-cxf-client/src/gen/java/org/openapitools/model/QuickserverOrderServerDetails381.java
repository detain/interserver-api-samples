package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverOrderServerDetails381  {
  
 /**
  * CPU details of the server.
  */
  @ApiModelProperty(example = "AMD Ryzen 9 5900X 12-Core Processor", value = "CPU details of the server.")

  private String cpu;

 /**
  * RAM capacity of the server.
  */
  @ApiModelProperty(example = "119GB", value = "RAM capacity of the server.")

  private String ram;

 /**
  * Hard disk capacity of the server.
  */
  @ApiModelProperty(example = "1760GB", value = "Hard disk capacity of the server.")

  private String hd;

 /**
  * Number of CPU cores.
  */
  @ApiModelProperty(example = "24", value = "Number of CPU cores.")

  private Integer cores;

 /**
  * Cost of the server.
  */
  @ApiModelProperty(example = "$140.00", value = "Cost of the server.")

  private String cost;
 /**
   * CPU details of the server.
   * @return cpu
  **/
  @JsonProperty("cpu")
  public String getCpu() {
    return cpu;
  }

  public void setCpu(String cpu) {
    this.cpu = cpu;
  }

  public QuickserverOrderServerDetails381 cpu(String cpu) {
    this.cpu = cpu;
    return this;
  }

 /**
   * RAM capacity of the server.
   * @return ram
  **/
  @JsonProperty("ram")
  public String getRam() {
    return ram;
  }

  public void setRam(String ram) {
    this.ram = ram;
  }

  public QuickserverOrderServerDetails381 ram(String ram) {
    this.ram = ram;
    return this;
  }

 /**
   * Hard disk capacity of the server.
   * @return hd
  **/
  @JsonProperty("hd")
  public String getHd() {
    return hd;
  }

  public void setHd(String hd) {
    this.hd = hd;
  }

  public QuickserverOrderServerDetails381 hd(String hd) {
    this.hd = hd;
    return this;
  }

 /**
   * Number of CPU cores.
   * @return cores
  **/
  @JsonProperty("cores")
  public Integer getCores() {
    return cores;
  }

  public void setCores(Integer cores) {
    this.cores = cores;
  }

  public QuickserverOrderServerDetails381 cores(Integer cores) {
    this.cores = cores;
    return this;
  }

 /**
   * Cost of the server.
   * @return cost
  **/
  @JsonProperty("cost")
  public String getCost() {
    return cost;
  }

  public void setCost(String cost) {
    this.cost = cost;
  }

  public QuickserverOrderServerDetails381 cost(String cost) {
    this.cost = cost;
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
    QuickserverOrderServerDetails381 quickserverOrderServerDetails381 = (QuickserverOrderServerDetails381) o;
    return Objects.equals(this.cpu, quickserverOrderServerDetails381.cpu) &&
        Objects.equals(this.ram, quickserverOrderServerDetails381.ram) &&
        Objects.equals(this.hd, quickserverOrderServerDetails381.hd) &&
        Objects.equals(this.cores, quickserverOrderServerDetails381.cores) &&
        Objects.equals(this.cost, quickserverOrderServerDetails381.cost);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cpu, ram, hd, cores, cost);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderServerDetails381 {\n");
    
    sb.append("    cpu: ").append(toIndentedString(cpu)).append("\n");
    sb.append("    ram: ").append(toIndentedString(ram)).append("\n");
    sb.append("    hd: ").append(toIndentedString(hd)).append("\n");
    sb.append("    cores: ").append(toIndentedString(cores)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
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


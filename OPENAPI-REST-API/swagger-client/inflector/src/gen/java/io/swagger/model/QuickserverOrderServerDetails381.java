package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class QuickserverOrderServerDetails381   {
  @JsonProperty("cpu")
  private String cpu = null;
  @JsonProperty("ram")
  private String ram = null;
  @JsonProperty("hd")
  private String hd = null;
  @JsonProperty("cores")
  private Integer cores = null;
  @JsonProperty("cost")
  private String cost = null;
  /**
   * CPU details of the server.
   **/
  public QuickserverOrderServerDetails381 cpu(String cpu) {
    this.cpu = cpu;
    return this;
  }

  
  @Schema(example = "AMD Ryzen 9 5900X 12-Core Processor", description = "CPU details of the server.")
  @JsonProperty("cpu")
  public String getCpu() {
    return cpu;
  }
  public void setCpu(String cpu) {
    this.cpu = cpu;
  }

  /**
   * RAM capacity of the server.
   **/
  public QuickserverOrderServerDetails381 ram(String ram) {
    this.ram = ram;
    return this;
  }

  
  @Schema(example = "119GB", description = "RAM capacity of the server.")
  @JsonProperty("ram")
  public String getRam() {
    return ram;
  }
  public void setRam(String ram) {
    this.ram = ram;
  }

  /**
   * Hard disk capacity of the server.
   **/
  public QuickserverOrderServerDetails381 hd(String hd) {
    this.hd = hd;
    return this;
  }

  
  @Schema(example = "1760GB", description = "Hard disk capacity of the server.")
  @JsonProperty("hd")
  public String getHd() {
    return hd;
  }
  public void setHd(String hd) {
    this.hd = hd;
  }

  /**
   * Number of CPU cores.
   **/
  public QuickserverOrderServerDetails381 cores(Integer cores) {
    this.cores = cores;
    return this;
  }

  
  @Schema(example = "24", description = "Number of CPU cores.")
  @JsonProperty("cores")
  public Integer getCores() {
    return cores;
  }
  public void setCores(Integer cores) {
    this.cores = cores;
  }

  /**
   * Cost of the server.
   **/
  public QuickserverOrderServerDetails381 cost(String cost) {
    this.cost = cost;
    return this;
  }

  
  @Schema(example = "$140.00", description = "Cost of the server.")
  @JsonProperty("cost")
  public String getCost() {
    return cost;
  }
  public void setCost(String cost) {
    this.cost = cost;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderServerDetails381 quickserverOrderServerDetails381 = (QuickserverOrderServerDetails381) o;
    return Objects.equals(cpu, quickserverOrderServerDetails381.cpu) &&
        Objects.equals(ram, quickserverOrderServerDetails381.ram) &&
        Objects.equals(hd, quickserverOrderServerDetails381.hd) &&
        Objects.equals(cores, quickserverOrderServerDetails381.cores) &&
        Objects.equals(cost, quickserverOrderServerDetails381.cost);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

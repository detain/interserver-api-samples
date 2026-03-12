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

public class QuickserverOrderServerDetails381   {
  
  @Schema(example = "AMD Ryzen 9 5900X 12-Core Processor", description = "CPU details of the server.")
 /**
   * CPU details of the server.  
  **/
  private String cpu = null;
  
  @Schema(example = "119GB", description = "RAM capacity of the server.")
 /**
   * RAM capacity of the server.  
  **/
  private String ram = null;
  
  @Schema(example = "1760GB", description = "Hard disk capacity of the server.")
 /**
   * Hard disk capacity of the server.  
  **/
  private String hd = null;
  
  @Schema(example = "24", description = "Number of CPU cores.")
 /**
   * Number of CPU cores.  
  **/
  private Integer cores = null;
  
  @Schema(example = "$140.00", description = "Cost of the server.")
 /**
   * Cost of the server.  
  **/
  private String cost = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

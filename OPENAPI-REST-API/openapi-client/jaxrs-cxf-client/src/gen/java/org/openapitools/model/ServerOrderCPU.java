package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A CPU option available when ordering a dedicated server.
 */
@ApiModel(description="A CPU option available when ordering a dedicated server.")

public class ServerOrderCPU  {
  
 /**
  * CPU ID.
  */
  @ApiModelProperty(example = "254", value = "CPU ID.")

  private String id;

 /**
  * CPU price.
  */
  @ApiModelProperty(example = "0", value = "CPU price.")

  private Integer price;

 /**
  * CPU image.
  */
  @ApiModelProperty(example = "ryzen.png", value = "CPU image.")

  private String img;

 /**
  * Short description of the CPU.
  */
  @ApiModelProperty(example = "AMD RYZEN 7900X", value = "Short description of the CPU.")

  private String shortDesc;

 /**
  * Long description of the CPU.
  */
  @ApiModelProperty(example = "High core and thread count...", value = "Long description of the CPU.")

  private String longDesc;

 /**
  * Location of the CPU.
  */
  @ApiModelProperty(example = "New York", value = "Location of the CPU.")

  private String location;

 /**
  * Front Side Bus information.
  */
  @ApiModelProperty(value = "Front Side Bus information.")

  private String fsb;

 /**
  * Manufacturer information.
  */
  @ApiModelProperty(value = "Manufacturer information.")

  private String manu;

 /**
  * CPU type.
  */
  @ApiModelProperty(example = "AMD", value = "CPU type.")

  private String type;

 /**
  * CPU speed.
  */
  @ApiModelProperty(example = "4.7", value = "CPU speed.")

  private String speed;

 /**
  * Cache information.
  */
  @ApiModelProperty(value = "Cache information.")

  private String cache;

 /**
  * Active status.
  */
  @ApiModelProperty(example = "1", value = "Active status.")

  private String active;

 /**
  * Number of cores.
  */
  @ApiModelProperty(example = "12", value = "Number of cores.")

  private String numCores;

 /**
  * Number of CPUs.
  */
  @ApiModelProperty(example = "1", value = "Number of CPUs.")

  private String numCpus;

 /**
  * CPU benchmark.
  */
  @ApiModelProperty(example = "121148", value = "CPU benchmark.")

  private String benchmark;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "75", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * Maximum RAM supported.
  */
  @ApiModelProperty(example = "128", value = "Maximum RAM supported.")

  private String maxRam;

 /**
  * Minimum RAM required.
  */
  @ApiModelProperty(example = "128", value = "Minimum RAM required.")

  private String minRam;

 /**
  * Maximum LFF (Large Form Factor) supported.
  */
  @ApiModelProperty(example = "4", value = "Maximum LFF (Large Form Factor) supported.")

  private String maxLff;

 /**
  * Maximum SFF (Small Form Factor) supported.
  */
  @ApiModelProperty(example = "4", value = "Maximum SFF (Small Form Factor) supported.")

  private String maxSff;

 /**
  * Maximum NVMe drives supported.
  */
  @ApiModelProperty(example = "2", value = "Maximum NVMe drives supported.")

  private String maxNve;

 /**
  * Visibility status.
  */
  @ApiModelProperty(example = "yes", value = "Visibility status.")

  private String visible;

 /**
  * Hard drive IDs.
  */
  @ApiModelProperty(value = "Hard drive IDs.")

  private String hdIds;

 /**
  * Display of CPU price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of CPU price.")

  private String priceDisplay;

 /**
  * Display of monthly CPU price.
  */
  @ApiModelProperty(example = "$75.00", value = "Display of monthly CPU price.")

  private String monthlyPriceDisplay;
 /**
   * CPU ID.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderCPU id(String id) {
    this.id = id;
    return this;
  }

 /**
   * CPU price.
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderCPU price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * CPU image.
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderCPU img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the CPU.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderCPU shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the CPU.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderCPU longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Location of the CPU.
   * @return location
  **/
  @JsonProperty("location")
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public ServerOrderCPU location(String location) {
    this.location = location;
    return this;
  }

 /**
   * Front Side Bus information.
   * @return fsb
  **/
  @JsonProperty("fsb")
  public String getFsb() {
    return fsb;
  }

  public void setFsb(String fsb) {
    this.fsb = fsb;
  }

  public ServerOrderCPU fsb(String fsb) {
    this.fsb = fsb;
    return this;
  }

 /**
   * Manufacturer information.
   * @return manu
  **/
  @JsonProperty("manu")
  public String getManu() {
    return manu;
  }

  public void setManu(String manu) {
    this.manu = manu;
  }

  public ServerOrderCPU manu(String manu) {
    this.manu = manu;
    return this;
  }

 /**
   * CPU type.
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerOrderCPU type(String type) {
    this.type = type;
    return this;
  }

 /**
   * CPU speed.
   * @return speed
  **/
  @JsonProperty("speed")
  public String getSpeed() {
    return speed;
  }

  public void setSpeed(String speed) {
    this.speed = speed;
  }

  public ServerOrderCPU speed(String speed) {
    this.speed = speed;
    return this;
  }

 /**
   * Cache information.
   * @return cache
  **/
  @JsonProperty("cache")
  public String getCache() {
    return cache;
  }

  public void setCache(String cache) {
    this.cache = cache;
  }

  public ServerOrderCPU cache(String cache) {
    this.cache = cache;
    return this;
  }

 /**
   * Active status.
   * @return active
  **/
  @JsonProperty("active")
  public String getActive() {
    return active;
  }

  public void setActive(String active) {
    this.active = active;
  }

  public ServerOrderCPU active(String active) {
    this.active = active;
    return this;
  }

 /**
   * Number of cores.
   * @return numCores
  **/
  @JsonProperty("num_cores")
  public String getNumCores() {
    return numCores;
  }

  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  public ServerOrderCPU numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

 /**
   * Number of CPUs.
   * @return numCpus
  **/
  @JsonProperty("num_cpus")
  public String getNumCpus() {
    return numCpus;
  }

  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  public ServerOrderCPU numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

 /**
   * CPU benchmark.
   * @return benchmark
  **/
  @JsonProperty("benchmark")
  public String getBenchmark() {
    return benchmark;
  }

  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  public ServerOrderCPU benchmark(String benchmark) {
    this.benchmark = benchmark;
    return this;
  }

 /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderCPU monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Maximum RAM supported.
   * @return maxRam
  **/
  @JsonProperty("max_ram")
  public String getMaxRam() {
    return maxRam;
  }

  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  public ServerOrderCPU maxRam(String maxRam) {
    this.maxRam = maxRam;
    return this;
  }

 /**
   * Minimum RAM required.
   * @return minRam
  **/
  @JsonProperty("min_ram")
  public String getMinRam() {
    return minRam;
  }

  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  public ServerOrderCPU minRam(String minRam) {
    this.minRam = minRam;
    return this;
  }

 /**
   * Maximum LFF (Large Form Factor) supported.
   * @return maxLff
  **/
  @JsonProperty("max_lff")
  public String getMaxLff() {
    return maxLff;
  }

  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  public ServerOrderCPU maxLff(String maxLff) {
    this.maxLff = maxLff;
    return this;
  }

 /**
   * Maximum SFF (Small Form Factor) supported.
   * @return maxSff
  **/
  @JsonProperty("max_sff")
  public String getMaxSff() {
    return maxSff;
  }

  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  public ServerOrderCPU maxSff(String maxSff) {
    this.maxSff = maxSff;
    return this;
  }

 /**
   * Maximum NVMe drives supported.
   * @return maxNve
  **/
  @JsonProperty("max_nve")
  public String getMaxNve() {
    return maxNve;
  }

  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  public ServerOrderCPU maxNve(String maxNve) {
    this.maxNve = maxNve;
    return this;
  }

 /**
   * Visibility status.
   * @return visible
  **/
  @JsonProperty("visible")
  public String getVisible() {
    return visible;
  }

  public void setVisible(String visible) {
    this.visible = visible;
  }

  public ServerOrderCPU visible(String visible) {
    this.visible = visible;
    return this;
  }

 /**
   * Hard drive IDs.
   * @return hdIds
  **/
  @JsonProperty("hd_ids")
  public String getHdIds() {
    return hdIds;
  }

  public void setHdIds(String hdIds) {
    this.hdIds = hdIds;
  }

  public ServerOrderCPU hdIds(String hdIds) {
    this.hdIds = hdIds;
    return this;
  }

 /**
   * Display of CPU price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderCPU priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly CPU price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderCPU monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
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
    ServerOrderCPU serverOrderCPU = (ServerOrderCPU) o;
    return Objects.equals(this.id, serverOrderCPU.id) &&
        Objects.equals(this.price, serverOrderCPU.price) &&
        Objects.equals(this.img, serverOrderCPU.img) &&
        Objects.equals(this.shortDesc, serverOrderCPU.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderCPU.longDesc) &&
        Objects.equals(this.location, serverOrderCPU.location) &&
        Objects.equals(this.fsb, serverOrderCPU.fsb) &&
        Objects.equals(this.manu, serverOrderCPU.manu) &&
        Objects.equals(this.type, serverOrderCPU.type) &&
        Objects.equals(this.speed, serverOrderCPU.speed) &&
        Objects.equals(this.cache, serverOrderCPU.cache) &&
        Objects.equals(this.active, serverOrderCPU.active) &&
        Objects.equals(this.numCores, serverOrderCPU.numCores) &&
        Objects.equals(this.numCpus, serverOrderCPU.numCpus) &&
        Objects.equals(this.benchmark, serverOrderCPU.benchmark) &&
        Objects.equals(this.monthlyPrice, serverOrderCPU.monthlyPrice) &&
        Objects.equals(this.maxRam, serverOrderCPU.maxRam) &&
        Objects.equals(this.minRam, serverOrderCPU.minRam) &&
        Objects.equals(this.maxLff, serverOrderCPU.maxLff) &&
        Objects.equals(this.maxSff, serverOrderCPU.maxSff) &&
        Objects.equals(this.maxNve, serverOrderCPU.maxNve) &&
        Objects.equals(this.visible, serverOrderCPU.visible) &&
        Objects.equals(this.hdIds, serverOrderCPU.hdIds) &&
        Objects.equals(this.priceDisplay, serverOrderCPU.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderCPU.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, location, fsb, manu, type, speed, cache, active, numCores, numCpus, benchmark, monthlyPrice, maxRam, minRam, maxLff, maxSff, maxNve, visible, hdIds, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderCPU {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    fsb: ").append(toIndentedString(fsb)).append("\n");
    sb.append("    manu: ").append(toIndentedString(manu)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    speed: ").append(toIndentedString(speed)).append("\n");
    sb.append("    cache: ").append(toIndentedString(cache)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
    sb.append("    numCores: ").append(toIndentedString(numCores)).append("\n");
    sb.append("    numCpus: ").append(toIndentedString(numCpus)).append("\n");
    sb.append("    benchmark: ").append(toIndentedString(benchmark)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    maxRam: ").append(toIndentedString(maxRam)).append("\n");
    sb.append("    minRam: ").append(toIndentedString(minRam)).append("\n");
    sb.append("    maxLff: ").append(toIndentedString(maxLff)).append("\n");
    sb.append("    maxSff: ").append(toIndentedString(maxSff)).append("\n");
    sb.append("    maxNve: ").append(toIndentedString(maxNve)).append("\n");
    sb.append("    visible: ").append(toIndentedString(visible)).append("\n");
    sb.append("    hdIds: ").append(toIndentedString(hdIds)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
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


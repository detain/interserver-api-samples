package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * An IP block option available when ordering a dedicated server.
 */
@ApiModel(description="An IP block option available when ordering a dedicated server.")

public class ServerOrderIP  {
  
 /**
  * IP ID.
  */
  @ApiModelProperty(example = "9", value = "IP ID.")

  private String id;

 /**
  * IP price.
  */
  @ApiModelProperty(example = "0", value = "IP price.")

  private Integer price;

 /**
  * IP image.
  */
  @ApiModelProperty(example = "ips.jpg", value = "IP image.")

  private String img;

 /**
  * Short description of the IP.
  */
  @ApiModelProperty(example = "1 Vlan Ip (/30)", value = "Short description of the IP.")

  private String shortDesc;

 /**
  * Long description of the IP.
  */
  @ApiModelProperty(example = "1 IP In personal Vlan", value = "Long description of the IP.")

  private String longDesc;

 /**
  * Quantity of IPs.
  */
  @ApiModelProperty(example = "1", value = "Quantity of IPs.")

  private String qty;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "0", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * Display of IP price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of IP price.")

  private String priceDisplay;

 /**
  * Display of monthly IP price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of monthly IP price.")

  private String monthlyPriceDisplay;
 /**
   * IP ID.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderIP id(String id) {
    this.id = id;
    return this;
  }

 /**
   * IP price.
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderIP price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * IP image.
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderIP img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the IP.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderIP shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the IP.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderIP longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Quantity of IPs.
   * @return qty
  **/
  @JsonProperty("qty")
  public String getQty() {
    return qty;
  }

  public void setQty(String qty) {
    this.qty = qty;
  }

  public ServerOrderIP qty(String qty) {
    this.qty = qty;
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

  public ServerOrderIP monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Display of IP price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderIP priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly IP price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderIP monthlyPriceDisplay(String monthlyPriceDisplay) {
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
    ServerOrderIP serverOrderIP = (ServerOrderIP) o;
    return Objects.equals(this.id, serverOrderIP.id) &&
        Objects.equals(this.price, serverOrderIP.price) &&
        Objects.equals(this.img, serverOrderIP.img) &&
        Objects.equals(this.shortDesc, serverOrderIP.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderIP.longDesc) &&
        Objects.equals(this.qty, serverOrderIP.qty) &&
        Objects.equals(this.monthlyPrice, serverOrderIP.monthlyPrice) &&
        Objects.equals(this.priceDisplay, serverOrderIP.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderIP.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, qty, monthlyPrice, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderIP {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
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
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


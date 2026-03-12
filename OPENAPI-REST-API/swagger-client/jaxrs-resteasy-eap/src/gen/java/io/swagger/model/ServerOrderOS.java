package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="An operating system option available when ordering a dedicated server.")

public class ServerOrderOS   {
  private String id = null;
  private Integer price = null;
  private String img = null;
  private String shortDesc = null;
  private String longDesc = null;
  private Integer monthlyPrice = null;
  private String active = null;
  private String priceDisplay = null;
  private String monthlyPriceDisplay = null;

  /**
   * Operating System ID.
   **/
  
  @Schema(example = "51", description = "Operating System ID.")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Operating System price.
   **/
  
  @Schema(example = "0", description = "Operating System price.")
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * Operating System image.
   **/
  
  @Schema(description = "Operating System image.")
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the OS.
   **/
  
  @Schema(example = "AlmaLinux", description = "Short description of the OS.")
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the OS.
   **/
  
  @Schema(description = "Long description of the OS.")
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Monthly price.
   **/
  
  @Schema(example = "0", description = "Monthly price.")
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * Active status.
   **/
  
  @Schema(example = "1", description = "Active status.")
  @JsonProperty("active")
  @NotNull
  public String getActive() {
    return active;
  }
  public void setActive(String active) {
    this.active = active;
  }

  /**
   * Display of OS price.
   **/
  
  @Schema(example = "$0.00", description = "Display of OS price.")
  @JsonProperty("price_display")
  @NotNull
  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly OS price.
   **/
  
  @Schema(example = "$0.00", description = "Display of monthly OS price.")
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderOS serverOrderOS = (ServerOrderOS) o;
    return Objects.equals(id, serverOrderOS.id) &&
        Objects.equals(price, serverOrderOS.price) &&
        Objects.equals(img, serverOrderOS.img) &&
        Objects.equals(shortDesc, serverOrderOS.shortDesc) &&
        Objects.equals(longDesc, serverOrderOS.longDesc) &&
        Objects.equals(monthlyPrice, serverOrderOS.monthlyPrice) &&
        Objects.equals(active, serverOrderOS.active) &&
        Objects.equals(priceDisplay, serverOrderOS.priceDisplay) &&
        Objects.equals(monthlyPriceDisplay, serverOrderOS.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, monthlyPrice, active, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderOS {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

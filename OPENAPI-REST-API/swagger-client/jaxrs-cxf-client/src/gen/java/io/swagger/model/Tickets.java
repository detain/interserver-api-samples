package io.swagger.model;

import io.swagger.model.TicketsCountArray;
import io.swagger.model.TicketsRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;

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
  * A listing of support tickets.
 **/
@Schema(description="A listing of support tickets.")
public class Tickets   {
  
  @Schema(required = true, description = "")
  private String ima = null;
  
  @Schema(required = true, description = "")
  private String custid = null;
  
  @Schema(required = true, description = "")
  private String view = null;
  
  @Schema(required = true, description = "")
  private Integer currentPage = null;
  
  @Schema(required = true, description = "")
  private Integer limit = null;
  
  @Schema(required = true, description = "")
  private Integer sortcol = null;
  
  @Schema(required = true, description = "")
  private Integer sortdir = null;
  
  @Schema(required = true, description = "")
  private Integer rowsOffset = null;
  
  @Schema(required = true, description = "")
  private List<TicketsRow> tickets = new ArrayList<TicketsRow>();
  
  @Schema(required = true, description = "")
  private Integer pages = null;
  
  @Schema(required = true, description = "")
  private Integer rowsTotal = null;
  
  @Schema(required = true, description = "")
  private Integer inboxCount = null;
  
  @Schema(required = true, description = "")
  private TicketsCountArray countArray = null;
  
  @Schema(required = true, description = "")
  private String viewText = null;
 /**
   * Get ima
   * @return ima
  **/
  @JsonProperty("ima")
  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public Tickets ima(String ima) {
    this.ima = ima;
    return this;
  }

 /**
   * Get custid
   * @return custid
  **/
  @JsonProperty("custid")
  public String getCustid() {
    return custid;
  }

  public void setCustid(String custid) {
    this.custid = custid;
  }

  public Tickets custid(String custid) {
    this.custid = custid;
    return this;
  }

 /**
   * Get view
   * @return view
  **/
  @JsonProperty("view")
  public String getView() {
    return view;
  }

  public void setView(String view) {
    this.view = view;
  }

  public Tickets view(String view) {
    this.view = view;
    return this;
  }

 /**
   * Get currentPage
   * @return currentPage
  **/
  @JsonProperty("currentPage")
  public Integer getCurrentPage() {
    return currentPage;
  }

  public void setCurrentPage(Integer currentPage) {
    this.currentPage = currentPage;
  }

  public Tickets currentPage(Integer currentPage) {
    this.currentPage = currentPage;
    return this;
  }

 /**
   * Get limit
   * @return limit
  **/
  @JsonProperty("limit")
  public Integer getLimit() {
    return limit;
  }

  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  public Tickets limit(Integer limit) {
    this.limit = limit;
    return this;
  }

 /**
   * Get sortcol
   * @return sortcol
  **/
  @JsonProperty("sortcol")
  public Integer getSortcol() {
    return sortcol;
  }

  public void setSortcol(Integer sortcol) {
    this.sortcol = sortcol;
  }

  public Tickets sortcol(Integer sortcol) {
    this.sortcol = sortcol;
    return this;
  }

 /**
   * Get sortdir
   * @return sortdir
  **/
  @JsonProperty("sortdir")
  public Integer getSortdir() {
    return sortdir;
  }

  public void setSortdir(Integer sortdir) {
    this.sortdir = sortdir;
  }

  public Tickets sortdir(Integer sortdir) {
    this.sortdir = sortdir;
    return this;
  }

 /**
   * Get rowsOffset
   * @return rowsOffset
  **/
  @JsonProperty("rowsOffset")
  public Integer getRowsOffset() {
    return rowsOffset;
  }

  public void setRowsOffset(Integer rowsOffset) {
    this.rowsOffset = rowsOffset;
  }

  public Tickets rowsOffset(Integer rowsOffset) {
    this.rowsOffset = rowsOffset;
    return this;
  }

 /**
   * Get tickets
   * @return tickets
  **/
  @JsonProperty("tickets")
  public List<TicketsRow> getTickets() {
    return tickets;
  }

  public void setTickets(List<TicketsRow> tickets) {
    this.tickets = tickets;
  }

  public Tickets tickets(List<TicketsRow> tickets) {
    this.tickets = tickets;
    return this;
  }

  public Tickets addTicketsItem(TicketsRow ticketsItem) {
    this.tickets.add(ticketsItem);
    return this;
  }

 /**
   * Get pages
   * @return pages
  **/
  @JsonProperty("pages")
  public Integer getPages() {
    return pages;
  }

  public void setPages(Integer pages) {
    this.pages = pages;
  }

  public Tickets pages(Integer pages) {
    this.pages = pages;
    return this;
  }

 /**
   * Get rowsTotal
   * @return rowsTotal
  **/
  @JsonProperty("rowsTotal")
  public Integer getRowsTotal() {
    return rowsTotal;
  }

  public void setRowsTotal(Integer rowsTotal) {
    this.rowsTotal = rowsTotal;
  }

  public Tickets rowsTotal(Integer rowsTotal) {
    this.rowsTotal = rowsTotal;
    return this;
  }

 /**
   * Get inboxCount
   * @return inboxCount
  **/
  @JsonProperty("inboxCount")
  public Integer getInboxCount() {
    return inboxCount;
  }

  public void setInboxCount(Integer inboxCount) {
    this.inboxCount = inboxCount;
  }

  public Tickets inboxCount(Integer inboxCount) {
    this.inboxCount = inboxCount;
    return this;
  }

 /**
   * Get countArray
   * @return countArray
  **/
  @JsonProperty("countArray")
  public TicketsCountArray getCountArray() {
    return countArray;
  }

  public void setCountArray(TicketsCountArray countArray) {
    this.countArray = countArray;
  }

  public Tickets countArray(TicketsCountArray countArray) {
    this.countArray = countArray;
    return this;
  }

 /**
   * Get viewText
   * @return viewText
  **/
  @JsonProperty("viewText")
  public String getViewText() {
    return viewText;
  }

  public void setViewText(String viewText) {
    this.viewText = viewText;
  }

  public Tickets viewText(String viewText) {
    this.viewText = viewText;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Tickets {\n");
    
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    view: ").append(toIndentedString(view)).append("\n");
    sb.append("    currentPage: ").append(toIndentedString(currentPage)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    sortcol: ").append(toIndentedString(sortcol)).append("\n");
    sb.append("    sortdir: ").append(toIndentedString(sortdir)).append("\n");
    sb.append("    rowsOffset: ").append(toIndentedString(rowsOffset)).append("\n");
    sb.append("    tickets: ").append(toIndentedString(tickets)).append("\n");
    sb.append("    pages: ").append(toIndentedString(pages)).append("\n");
    sb.append("    rowsTotal: ").append(toIndentedString(rowsTotal)).append("\n");
    sb.append("    inboxCount: ").append(toIndentedString(inboxCount)).append("\n");
    sb.append("    countArray: ").append(toIndentedString(countArray)).append("\n");
    sb.append("    viewText: ").append(toIndentedString(viewText)).append("\n");
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

#tag Class
Protected Class Tickets

	#tag Property, Flags = &h0
		ima As String
	#tag EndProperty


	#tag Property, Flags = &h0
		custid As String
	#tag EndProperty


	#tag Property, Flags = &h0
		view As String
	#tag EndProperty


	#tag Property, Flags = &h0
		currentPage As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		limit As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		sortcol As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		sortdir As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		rowsOffset As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		tickets() As OpenAPIClient.Models.TicketsRow
	#tag EndProperty


	#tag Property, Flags = &h0
		pages As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		rowsTotal As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		inboxCount As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		countArray As OpenAPIClient.Models.TicketsCountArray
	#tag EndProperty


	#tag Property, Flags = &h0
		viewText As String
	#tag EndProperty





	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ima"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="view"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="currentPage"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="limit"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="sortcol"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="sortdir"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rowsOffset"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tickets"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="TicketsRow"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="pages"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rowsTotal"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="inboxCount"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="countArray"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="TicketsCountArray"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="viewText"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass



#tag Class
Protected Class TicketsRow

	#tag Property, Flags = &h0
		title As String
	#tag EndProperty


	#tag Property, Flags = &h0
		ticketmaskid As String
	#tag EndProperty


	#tag Property, Flags = &h0
		lastreplier As String
	#tag EndProperty


	#tag Property, Flags = &h0
		status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		priority As String
	#tag EndProperty


	#tag Property, Flags = &h0
		total_replies As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		lastactivity As String
	#tag EndProperty


	#tag Property, Flags = &h0
		departmenttitle As String
	#tag EndProperty


	#tag Property, Flags = &h0
		ticketid As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		can_close As String
	#tag EndProperty


	#tag Property, Flags = &h0
		attachments As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		status_text As String
	#tag EndProperty


	#tag Property, Flags = &h0
		checked As Boolean
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
			Name="title"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticketmaskid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="lastreplier"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="priority"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="total_replies"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="lastactivity"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="departmenttitle"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticketid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="can_close"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="attachments"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="status_text"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="checked"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass



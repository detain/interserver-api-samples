#tag Class
Protected Class StatusMonthlyBreakdown

	#tag Property, Flags = &h0
		default As MonthlyCounts
	#tag EndProperty


	#tag Property, Flags = &h0
		failed As MonthlyCounts
	#tag EndProperty


	#tag Property, Flags = &h0
		rejected As MonthlyCounts
	#tag EndProperty


	#tag Property, Flags = &h0
		pending As MonthlyCounts
	#tag EndProperty


	#tag Property, Flags = &h0
		locked As MonthlyCounts
	#tag EndProperty


	#tag Property, Flags = &h0
		paid As MonthlyCounts
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
			Name="default"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MonthlyCounts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="failed"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MonthlyCounts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rejected"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MonthlyCounts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="pending"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MonthlyCounts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="locked"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MonthlyCounts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="paid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MonthlyCounts"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass



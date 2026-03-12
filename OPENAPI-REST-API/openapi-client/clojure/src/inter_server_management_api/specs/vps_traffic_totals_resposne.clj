(ns inter-server-management-api.specs.vps-traffic-totals-resposne
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-totals-resposne-data
  {
   (ds/req :day) vps-traffic-totals-section-response-spec
   (ds/req :month) vps-traffic-totals-section-response-spec
   (ds/req :year) vps-traffic-totals-section-response-spec
   (ds/req :all) vps-traffic-totals-section-response-spec
   })

(def vps-traffic-totals-resposne-spec
  (ds/spec
    {:name ::vps-traffic-totals-resposne
     :spec vps-traffic-totals-resposne-data}))

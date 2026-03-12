(ns inter-server-management-api.specs.vps-traffic-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-history-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-resposne :refer :all]
            [inter-server-management-api.specs.vps-traffic-usage-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-data-section-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-response-data
  {
   (ds/req :name) string?
   (ds/req :target) string?
   (ds/req :interval) int?
   (ds/req :history) vps-traffic-history-response-spec
   (ds/req :last) inst?
   (ds/req :times) (s/coll-of inst?)
   (ds/req :totals) vps-traffic-totals-resposne-spec
   (ds/req :usage) vps-traffic-usage-response-spec
   (ds/req :data) (s/coll-of vps-traffic-data-section-response-spec)
   })

(def vps-traffic-response-spec
  (ds/spec
    {:name ::vps-traffic-response
     :spec vps-traffic-response-data}))

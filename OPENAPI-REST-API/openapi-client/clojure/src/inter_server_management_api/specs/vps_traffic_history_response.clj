(ns inter-server-management-api.specs.vps-traffic-history-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-history-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-history-section-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-history-response-data
  {
   (ds/req :hour) vps-traffic-history-section-response-spec
   (ds/req :day) vps-traffic-history-section-response-spec
   })

(def vps-traffic-history-response-spec
  (ds/spec
    {:name ::vps-traffic-history-response
     :spec vps-traffic-history-response-data}))

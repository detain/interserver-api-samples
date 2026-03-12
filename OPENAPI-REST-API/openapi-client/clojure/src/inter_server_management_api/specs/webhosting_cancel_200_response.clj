(ns inter-server-management-api.specs.webhosting-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def webhosting-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def webhosting-cancel-200-response-spec
  (ds/spec
    {:name ::webhosting-cancel-200-response
     :spec webhosting-cancel-200-response-data}))

(ns inter-server-management-api.specs.post-website-buy-ip-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def post-website-buy-ip-200-response-data
  {
   (ds/opt :message) string?
   (ds/opt :success) boolean?
   })

(def post-website-buy-ip-200-response-spec
  (ds/spec
    {:name ::post-website-buy-ip-200-response
     :spec post-website-buy-ip-200-response-data}))

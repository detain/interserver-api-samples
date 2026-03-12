(ns inter-server-management-api.specs.get-oauth-redirect-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-oauth-redirect-200-response-data
  {
   (ds/opt :redirect_url) string?
   })

(def get-oauth-redirect-200-response-spec
  (ds/spec
    {:name ::get-oauth-redirect-200-response
     :spec get-oauth-redirect-200-response-data}))

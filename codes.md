---
title: Codes
permalink: /codes/
---

<!-- Redirect quickly to codes.html and also embed it as a fallback/preview. -->

<script>
  // Fast client-side redirect to codes.html
  (function(){
    var target = "codes.html"; // change path if your file is in a folder, e.g. "codes/index.html"
    // If the current URL already ends with /codes/ we will redirect to codes.html
    if (!location.pathname.endsWith("/codes/")) {
      return;
    }
    // Do the redirect after a tiny timeout to let Jekyll finish loading
    setTimeout(function(){ location.replace(location.pathname + "../" + target); }, 10);
  })();
</script>

<noscript>
If JavaScript is disabled in your browser, click here to view the codes:  
[Open codes.html](./codes.html)
</noscript>

<!-- Embed the codes.html inside an iframe as a preview/fallback -->
<div style="max-width:1100px;margin:20px auto;padding:10px;">
  <iframe src="./codes.html"
          style="width:100%;min-height:70vh;border:1px solid #ccc;border-radius:8px;box-shadow:0 8px 24px rgba(0,0,0,0.6);"
          title="Codes Page (embedded)">
    Your browser does not support iframes — open directly: <a href="./codes.html">codes.html</a>
  </iframe>
</div>

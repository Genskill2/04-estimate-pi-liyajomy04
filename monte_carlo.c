float mc_pi(int count)
{
  float circount=0;
  for(int i=0;i<count;i++)
  {
    float x = frandom();
    float y = frandom();
    if(sqrt(x*x+y*y)<1)
    {
      circount++;
    }
    
  }
  float area = ((4*circount)/count);
  return area;
}
